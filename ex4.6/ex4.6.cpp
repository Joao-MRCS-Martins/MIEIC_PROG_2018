// ex4.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void readIntArray (int a[], int nElem)
{
	for (int i = 0; i < nElem; i++)
	{
		cout << " Escreva o " << i++ << "º elemento: ";
		cin >> a[i];
	}
}

int searchValueInIntArray(const int a[], int nElem, int value)
{
	for (int i = 0; i < nElem; i++)
	{
		if (a[i] == value)
		{
			return i;
			break;
		}
	}
	return -1;
}

int searchMultValuesInIntArray(const int a[], int nElem, int value, int index[])
{
	int x = 0;
	for (int i = 0; i < nElem; i++)
	{
		if (a[i] == value)
		{
			index[x] = i;
			x++;
		}
	}
	return x;
}


int main()
{
	int nElem,contagem;
	int a[] = {0};
	int value;
	cout << "Quantos elementos quer no array?: ";
	cin >> nElem;
	readIntArray(a, nElem);
	int index[nElem];
	cout << "Que numero quer pesquisar?: ";
	cin >> value;
	contagem = searchMultValuesInIntArray(a, nElem, value, index);
	if (contagem == 1)
	{
		cout << "O valor está na posição " << index[0];
	}
	else if (contagem > 1)
	{
		cout << "O valor ocorre nas posiçoes: ";
		for (int x = 0; x < contagem; x++)
		{
			cout << index[x] << ", ";
		}
	}
	else cout << "O valor não foi encontrado.";
	cout << endl;
    return 0;
}

