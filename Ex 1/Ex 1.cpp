// Ex 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Date.h"





int main()
{
	Date d1(2000, 11, 23);
	//d1.show();
	d1.setYear(2018);
	d1.setMonth(07);
	d1.setDay(12);
	//d1.show();
	Date d2("2012/01/13");
	//cout << d2.getYear() << "-" << d2.getMonth() << "-" << d2.getDay();
	if (d1.isEqualTo(d2))
		cout << "DATES ARE EQUAL!" << endl;
	else cout << "THEY AINT EQUAL!" << endl;
	if (d1.isAfter(d2))
		cout << "D1 IS AFTER D2!" << endl;
	else if (d1.isBefore(d2))
		cout << "D1 IS BEFORE D2!" << endl;
	Date d3;
	d3.show();
    return 0;
}

