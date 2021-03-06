// ex4.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;


struct Fraction {
	int numerator;
	int denominator;
};

Fraction readFracc()
{
	Fraction frac;
	cout << "Qual o numerador e denominador da fracao? ";
	cin >> frac.numerator >> frac.denominator;
	return frac;
}

void reduceFracc(Fraction &f)
{
	int num = f.numerator;
	int denom = f.denominator;
	while (f.denominator != 0)
	{
		int t = f.denominator;
		f.denominator = f.numerator % f.denominator;
		f.numerator = t;
	}
	int gcd = f.numerator;
	f.numerator = num / gcd;
	f.denominator = denom / gcd;
}

void writeFracc(Fraction f)
{
	cout << f.numerator << '/' << f.denominator << endl;
}

void somaFracc(Fraction frac1, Fraction frac2)
{
	Fraction frac_res;
	frac1.numerator = frac1.numerator * frac2.denominator;
	frac2.numerator = frac2.numerator * frac1.denominator;
	frac_res.numerator = frac1.numerator + frac2.numerator;
	frac_res.denominator = frac1.denominator * frac2.denominator;
	reduceFracc(frac_res);
	writeFracc(frac_res);
}

void subFracc(Fraction frac1, Fraction frac2)
{
	Fraction frac_res;
	frac1.numerator = frac1.numerator * frac2.denominator;
	frac2.numerator = frac2.numerator * frac1.denominator;
	frac_res.numerator = frac1.numerator - frac2.numerator;
	frac_res.denominator = frac1.denominator * frac2.denominator;
	reduceFracc(frac_res);
	writeFracc(frac_res);
}

void multFracc(Fraction frac1, Fraction frac2)
{
	Fraction frac_res;
	frac_res.numerator = frac1.numerator * frac2.numerator;
	frac_res.denominator = frac1.denominator * frac2.denominator;
	reduceFracc(frac_res);
	writeFracc(frac_res);
}

void divFracc(Fraction frac1, Fraction frac2)
{
	Fraction frac_res;
	frac_res.numerator = frac1.numerator * frac2.denominator;
	frac_res.denominator = frac1.denominator * frac2.numerator;
	reduceFracc(frac_res);
	writeFracc(frac_res);
}

int main()
{
	char op;
	Fraction frac1, frac2;
	frac1 = readFracc();
	reduceFracc(frac1);
	frac2 = readFracc();
	reduceFracc(frac2);
	cout << "Indique a operaçao a realizar (pelo sinal): ";
	cin >> op;
	switch (op)
	{
	case '+':
		somaFracc(frac1, frac2);
		break;
	case '-':
		subFracc(frac1, frac2);
		break;
	case '*':
		multFracc(frac1, frac2);
		break;
	case '/':
		divFracc(frac1, frac2);
		break;
	default:
		cout << "Operacao invalida!" << endl;
	}
	return 0;
}