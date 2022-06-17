package booking

import (
	"fmt"
	"time"
)

// Schedule returns a time.Time from a string containing a date
func Schedule(date string) time.Time {
	dateTime, _ := time.Parse("1/2/2006 15:04:05", date)
	return dateTime
}

// HasPassed returns whether a date has passed
func HasPassed(date string) bool {
	dateTime, _ := time.Parse("January 2, 2006 15:04:05", date)
	return dateTime.Before(time.Now())
}

// IsAfternoonAppointment returns whether a time is in the afternoon - "Thursday, July 25, 2019 13:45:00"
func IsAfternoonAppointment(date string) bool {
	dateTime, _ := time.Parse("Monday, January 2, 2006 15:04:05", date)
	return dateTime.Hour() >= 12 && dateTime.Hour() < 18
}

// Description returns a formatted string of the appointment time
func Description(date string) string {
	dateTime := Schedule(date)
	return dateTime.Format("You have an appointment on Monday, January 2, 2006, at 15:04.")
}

// AnniversaryDate returns a Time with this year's anniversary - 2020-09-15 00:00:00 +0000 UTC
func AnniversaryDate() time.Time {
	date := fmt.Sprintf("09/15/%v 00:00:00 +0000 UTC", time.Now().Year())
	dateTime, _ := time.Parse("01/02/2006 15:04:05 -0700 MST", date)
	return dateTime
}
