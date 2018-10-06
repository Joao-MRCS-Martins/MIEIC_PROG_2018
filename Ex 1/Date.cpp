#include "stdafx.h"
#include "Date.h"

Date::Date(unsigned int y, unsigned int m, unsigned int d)
{
	year = y;
	month = m;
	day = d;
}

Date::Date(string yearMonthDay) {
	year = atoi(yearMonthDay.substr(0, 4).c_str());
	month = atoi(yearMonthDay.substr(5, 2).c_str());
	day = atoi(yearMonthDay.substr(8, 2).c_str());
}
void Date::setYear(unsigned int y)
{
	year = y;
}

void Date::setMonth(unsigned int m) {
	month = m;
}

void Date::setDay(unsigned int d)
{
	day = d;
}

void Date::setDate(unsigned int y, unsigned int m, unsigned int d)
{
	year = y;
	month = m;
	day = d;
}

unsigned int Date::getYear() const {
	return year;
}

unsigned int Date::getMonth()const  {
	return month;
}

unsigned int Date::getDay() const {
	return day;
}

string Date::getDate() {
	stringstream oss;
	oss << year << '/' << month << '/' << day;
	return oss.str();
}

void Date::show() {
	cout << Date::getDate();
}

unsigned int Date::daysIn(unsigned int year, unsigned int month) {
	switch (month) {
	case 1: case 3: case 5: case 7: case 8 : case 10: case 12:
		return 31;
		break;
	case 4: case 6 : case 9: case 11:
		return 30;
		break;
	}
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		return 29;
	else return 28;
}

bool Date::isValid() {
	int d = getDay();
	int maxdays = daysIn(year, month);
	if (d > maxdays || d < 1)
		return false;
	else if (month > 12 || month < 1)
		return false;
	else return true;
}

bool Date::isEqualTo(const Date &date) {
	if (year != date.getYear())
		return false;
	else if (month != date.getMonth())
		return false;
	else if (day != date.getDay())
		return false;
	else return true;
}

bool Date::isNotEqualTo(const Date &date) {
	return (!isEqualTo(date));
}

bool Date::isAfter(const Date &date) {
	if (year > date.getYear())
		return true;
	else if (year == date.getYear() && month > date.getMonth())
		return true;
	else if (year == date.getYear() && month == date.getMonth() && day > date.getDay())
		return true;
	else return false;
}

bool Date::isBefore(const Date &date) {
	return (isNotEqualTo(date) && (!isAfter(date)));
}

Date::Date() {
	time_t now = time(0);
	tm * ltm = localtime(&now);
	year = 1900 + ltm->tm_year;
	month = 1 + ltm->tm_mon;
	day = ltm->tm_mday;
}