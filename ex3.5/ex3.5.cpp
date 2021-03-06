// ex3.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

bool readFracc(int &numerator, int &denominator)
{
	char div;
	cin >> numerator >> div >> denominator;
	if (denominator != 0 && div == '/')
	{
		return true;
	}
	else return false;
}

void writeFracc(int numerator, int denominator)
{
	cout << numerator << '/' << denominator << endl;
}

void reduceFracc(int &numerator, int &denominator)
{
	int num = numerator;
	int denom = denominator;
	while (denominator != 0)
	{
		int t = denominator;
		denominator = numerator % denominator;
		numerator = t;
	}
	int gcd = numerator;
	numerator = num / gcd;
	denominator = denom / gcd;
}

bool readOp(char &op)
{
	cin >> op;
	if (op == '+' || op == '-' || op == '/' || op == '*')
		return true;
	else return false;
}

void Operation(int numerator, int denominator, int numer2, int denom2, char op, int &numerF, int &denomF)
{
	if (op == '+')
	{
		numerF = numerator * denom2 + numer2 * denominator;
		denomF = denominator * denom2;
		reduceFracc(numerF, denomF);
	}
	else if (op == '-')
	{
		numerF = numerator * denom2 - numer2 * denominator;
		denomF = denominator * denom2;
		reduceFracc(numerF, denomF);
	}
	else if (op == '*')
	{
		numerF = numerator * numer2;
		denomF = denominator * denom2;
		reduceFracc(numerF, denomF);
	}
	else if (op == '/')
	{
		numerF = numerator * denom2;
		denomF = denominator * numer2;
		reduceFracc(numerF, denomF);
	}
}

int main()
{
	int numerator, denominator;
	int numer2, denom2;
	int numerF, denomF;
	char op;
	char wth;
	cout << "Quer simplificar fracao ou fazer uma operacao? (S/O): ";
	cin >> wth;
	if (toupper(wth)== 'S')
	{
		cout << "Qual a fracao a ler? ";
		if (readFracc(numerator, denominator) == true)
		{
			reduceFracc(numerator, denominator);
			writeFracc(numerator, denominator);
		}
	}
	else if (toupper(wth) == 'O')
	{
		char op;
		cout << "Qual a operacao? ";
		bool frac1 = readFracc(numerator, denominator);
		bool opr= readOp(op);
		bool frac2 = readFracc(numer2, denom2);
		
		if (frac1 == true && frac2 == true && opr == true)
		{
			Operation(numerator, denominator, numer2, denom2, op, numerF, denomF);
			cout << " O resultado e: ";
			writeFracc(numerF, denomF);
		}
		else cout << " Operacao invalida. " << endl;	
	}
	else cout << " Entrada invalida. " << endl;
    return 0;
}

