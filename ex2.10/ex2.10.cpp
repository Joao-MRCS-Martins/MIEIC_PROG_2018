// ex2.10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
//ex2.10a

/*void lerinput(int &cap)
{
	cout << "Qual o numero a ler?: ";
	cin >> cap;
}

void verify(bool &capic, int cap)
{
	int p1 = cap % 10;
	int p2 = cap / 100;
	if (p1 == p2)
		capic = true;
}

int main()
{
	int cap;
	bool capic = false;
	lerinput(cap);
	verify(capic, cap);
	if (capic)
		cout << "E capicua." << endl;
	else
		cout << "Nao e capicua." << endl;
	return 0;
}*/



//ex2.10b
void readandlength(int &cap, int &length)
{
	cout << "Qual o numero a ler?: ";
	cin >> cap;
	for (int x = cap; x != 0; x /= 10, length++);
}
void verify(bool &capic, int cap, int length)
{
	if (length % 2)
	{
		for (int x = 1; cap > 10;length = length-2)
		{
			int x2 = length - x;
			int p1 = cap % 10;
			int p2 = cap / pow(10, x2);
			if (p1 == p2)
			{
				capic = true;
				cap = cap % (int) pow(10, x2);
				cap = cap / 10;
			}
			else
			{
				capic = false;
				break;
			}
		}
	}
	else
	{
		for (int x = 1; cap != 0;length = length - 2)
		{
			int x2 = length - x;
			int p1 = cap % 10;
			int p2 = cap / pow(10, x2);
			if (p1 == p2)
			{
				capic = true;
				cap = cap % (int)pow(10, x2);
				cap = cap / 10;
			}
			else
			{
				capic = false;
				break;
			}
		}
	}
}

int main()
{
	int cap= 0;
	int length = 0;
	bool capic = false;
	readandlength(cap, length);
	verify(capic, cap,length);
	if (capic)
		cout << "E capicua." << endl;
	else
		cout << "Nao e capicua." << endl;
	return 0;
}


