// ex4.9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int binarySearch(const vector<string> &v, string value)
{
	int bottom = 0;
	int top = v.size() - 1;
	bool found = false;
	double middle;
	while (bottom < top)
	{
		if (v.size() % 2 == 0)
		{
			middle = (top - bottom) / 2;
			middle = ceil(middle);
		}
		else
		{
			middle = (top - bottom) / 2;
			middle = floor(middle);
		}
		if (v.at(middle) == value)
		{
			found = true;
			break;
		}
		else if (v.at(middle) < value)
		{
			bottom = middle + 1;
		}
		else top = middle - 1;
	}
	if (found == true)
		return middle;
	else return -1;
}
void readIntVector(vector<string> &v, int nElem)
{
	for (int i = 0; i < nElem; i++)
	{
		cout << " Escreva o " << i + 1 << " elemento: ";
		cin >> v[i];
	}
}

int main()
{
	string value;
	int nElem;
	cout << "Qual o tamanho do vector?: ";
	cin >> nElem;
	vector < string> v;
	v.resize(nElem);
	readIntVector(v, nElem);
	cout << "Qual o valor a procurar?: ";
	cin >> value;
	int index = binarySearch(v, value);
	if (index >= 0)
	{
		cout << " o indice e " << index << endl;
	}
	else cout << "Nao foi encontrado" << endl;
    return 0;
}

