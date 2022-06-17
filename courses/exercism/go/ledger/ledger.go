package ledger

import (
	"errors"
	"fmt"
	"sort"
	"strings"
	"time"
	"unicode/utf8"
)

type Entry struct {
	Date        string // "Y-m-d"
	Description string
	Change      int // in cents
}

var (
	americanEnglish  = "en-US"
	netherlandsDutch = "nl-NL"
)

var locales = map[string]*Locale{
	americanEnglish:  getAmericanEnglish(),
	netherlandsDutch: getNetherlandsDutch(),
}

var currencies = map[string]string{
	"USD": "$",
	"EUR": "€",
}

type Locale struct {
	tag         string
	getHeaders  func() (string, string, string)
	dateFormat  func() string
	moneyFormat func(amount string, isNegative bool) (string, string)
}

type Parser struct {
	cur string
	loc *Locale
}

func NewParser(cur, loc string) (*Parser, error) {
	l := locales[loc]
	if l == nil {
		return nil, errors.New("invalid locale")
	}

	c := currencies[cur]
	if c == "" {
		return nil, errors.New("invalid currency")
	}

	return &Parser{
		cur: c,
		loc: l,
	}, nil
}

func (p *Parser) getHeaders() (string, string, string) {
	return p.loc.getHeaders()
}

func (p *Parser) parseEntry(e Entry) (string, string, string, error) {
	date, err := p.parseDate(e.Date)
	if err != nil {
		return "", "", "", err
	}

	desc := e.Description
	if len(desc) > 25 {
		desc = desc[:22] + "..."
	}

	change, err := p.parseChange(e.Change)
	if err != nil {
		return "", "", "", err
	}

	return date, desc, change, nil
}

func (p *Parser) parseDate(date string) (string, error) {
	d, err := time.Parse("2006-01-02", date)
	if err != nil {
		return "", errors.New("invalid entry date: " + err.Error())
	}

	return d.Format(p.loc.dateFormat()), nil
}

func (p *Parser) parseChange(change int) (string, error) {
	isNegative := change < 0
	if isNegative {
		change *= -1
	}

	amount := fmt.Sprintf("%.2f", float64(change)/100)
	format, amount := p.loc.moneyFormat(amount, isNegative)

	amount = fmt.Sprintf(format, p.cur, amount)
	return strings.Repeat(" ", 13-utf8.RuneCountInString(amount)) + amount, nil
}

func formatMoney(amount, thousand, cents string) string {
	formatted := ""
	values := strings.Split(amount, ".")
	for i, v := range values[0] {
		formatted += string(v)

		size := len(values[0]) - 1 - i
		fmt.Println(values[0], size)
		if size >= 3 && size%3 == 0 {
			formatted += thousand
		}
	}

	return formatted + cents + values[1]
}

func formatPrint(args ...interface{}) string {
	dateSpace := strings.Repeat(" ", 11-len(args[0].(string)))
	descSpace := strings.Repeat(" ", 26-len(args[1].(string)))

	return fmt.Sprintf("%v%s| %v%s| %v\n", args[0], dateSpace, args[1], descSpace, args[2])
}

func sortEntries(entries []Entry) []Entry {
	es := make([]Entry, len(entries))
	copy(es, entries)

	sort.SliceStable(es, func(i, j int) bool {
		return es[i].Date <= es[j].Date && es[i].Description <= es[j].Description && es[i].Change <= es[j].Change
	})

	return es
}

func FormatLedger(currency string, locale string, entries []Entry) (string, error) {
	p, err := NewParser(currency, locale)
	if err != nil {
		return "", err
	}

	s := formatPrint(p.getHeaders())
	for _, e := range sortEntries(entries) {
		d, desc, change, err := p.parseEntry(e)
		if err != nil {
			return "", err
		}

		s += formatPrint(d, desc, change)
	}

	return s, nil
}

func getAmericanEnglish() *Locale {
	return &Locale{
		tag: americanEnglish,
		getHeaders: func() (string, string, string) {
			return "Date", "Description", "Change"
		},
		dateFormat: func() string { return "01/02/2006" },
		moneyFormat: func(amount string, isNegative bool) (string, string) {
			format := "%v%v "
			if isNegative {
				format = "(%v%v)"
			}

			return format, formatMoney(amount, ",", ".")
		},
	}
}

func getNetherlandsDutch() *Locale {
	return &Locale{
		tag: netherlandsDutch,
		getHeaders: func() (string, string, string) {
			return "Datum", "Omschrijving", "Verandering"
		},
		dateFormat: func() string { return "02-01-2006" },
		moneyFormat: func(amount string, isNegative bool) (string, string) {
			format := "%v %v "
			if isNegative {
				format = "%v %v-"
			}

			return format, formatMoney(amount, ".", ",")
		},
	}
}
