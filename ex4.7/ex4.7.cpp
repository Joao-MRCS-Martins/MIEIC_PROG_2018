// ex4.7.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include<vector>
#include "stdafx.h"
using namespace std;

void readIntVector(vector<int> &v, int nElem)
{
	for (int i = 0; i < nElem; i++)
	{
		cout << " Escreva o " << i++ << "º elemento: ";
		cin >> v[i];
	}
}

int searchValueInVector(const vector<int> &v, int value)
{
	int veclength = v.size();
	for (int i = 0; i < veclength; i++)
	{
		if (v[i] == value)
		{
			return i;
			break;
		}
	}
	return -1;
}

vector<int> searchMultValuesInIntVector(const vector<int> &v, int value)
{
	int veclength = v.size();
	vector <int> a;
	for (int i = 0; i < veclength; i++)
	{
		if (v[i] == value)
		{
			a.push_back(i);
		}
	}
	return a;
}


void readIntVectorUnlim(vector<int> &v)
{
	bool addother = true;
	for (int i = 0; addother == true; i++)
	{
		cout << " Escreva o " << i << "º elemento: ";
		cin >> v[i];
		if (cin.fail())
		{
			if (cin.eof())
				addother = false;
			else {
				cin.clear();
			}
		}
	}
}

int main()
{
	vector <int> v;
	int nElem, contagem;
	int value;
	cout << "Quantos elementos quer no vector?: ";
	cin >> nElem;
	readIntVector(v, nElem);
	cout << "Que numero quer pesquisar?: ";
	cin >> value;
	vector <int> contagem = searchMultValuesInIntVector(v, value);
	if (contagem == 1)
	{
		cout << "O valor está na posição " << v.at(0);
	}
	else if (contagem > 1)
	{
		cout << "O valor ocorre nas posiçoes: ";
		for (int x = 0; x < contagem; x++)
		{
			cout << v.at(x) << ", ";
		}
	}
	else cout << "O valor não foi encontrado.";
	cout << endl;
	return 0;
}

