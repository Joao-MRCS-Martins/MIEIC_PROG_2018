// ex1.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
		float x, y, z;
		cout << "Qual o valor de A?: ";
		do {
			cin.clear();
			cin.ignore(10000, '\n');
			cin >> x;
		} while (cin.fail())
		cout << "Qual o valor de B?: ";
		cin >> y;
		cout << "Qual o valor de C?: ";
		cin >> z;
		float m = (x + y + z) / 3;
		cout << " media = " << m << endl;
		cout << " A - media = " << x - m << endl;
		cout << " B - media = " << y - m << endl;
		cout << " C - media = " << z - m << endl;

	}

