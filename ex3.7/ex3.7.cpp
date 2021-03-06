// ex3.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

long fatorial_rec(int n)
{
	if (n == 1)
		return 1;
	else return (n * fatorial_rec(n - 1));
}

long fatorial_ite(int n)
{
	int fat = 1;
	for (int x = 1; x <= n; x++)
	{
		fat *= x;
	}
	return fat;
}
int main()
{
	char op;
	int n;
	cout << "De que numero quer ver o fatorial?: ";
	cin >> n;
	cout << "Que forma quer realizar a op, recursiva ou iterativa? (R/I): ";
	for (int x = 10000; x > -10000; x--)
	{
		cin >> op;
		if (toupper(op) == 'R' || toupper(op) == 'I')
			break;
		cin.clear();
	}
	if (toupper(op) == 'R')
		cout << fatorial_rec(n) << endl;
	else cout << fatorial_ite(n) << endl;
	return 0;
}

