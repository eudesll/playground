package blackjack

var cards = map[string]int{
	"ace":   11,
	"two":   2,
	"three": 3,
	"four":  4,
	"five":  5,
	"six":   6,
	"seven": 7,
	"eight": 8,
	"nine":  9,
	"ten":   10,
	"jack":  10,
	"queen": 10,
	"king":  10,
}

// ParseCard returns the integer value of a card following blackjack ruleset.
func ParseCard(card string) int {
	return cards[card]
}

// FirstTurn returns the decision for the first turn, given two cards of the
// player and one card of the dealer.
func FirstTurn(card1, card2, dealerCard string) string {
	cardsSum := ParseCard(card1) + ParseCard(card2)
	switch {
	case card1 == "ace" && card2 == "ace":
		return "P"
	case cardsSum == 21 && !dealerCanCancel(dealerCard):
		return "W"
	case cardsSum == 21 && dealerCanCancel(dealerCard) ||
		cardsSum >= 17 && cardsSum <= 20 ||
		cardsSum >= 12 && cardsSum <= 16 && ParseCard(dealerCard) < 7:
		return "S"
	default:
		return "H"
	}
}

func dealerCanCancel(card string) bool {
	return card == "ace" || card == "ten" || card == "queen" || card == "king" || card == "jack"
}
