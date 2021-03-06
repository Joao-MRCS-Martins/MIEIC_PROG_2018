// ex4.11.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void bubblesort(vector<int> &v)
{
	int veclen = v.size();
	for (int x = veclen; x > 0; x--)
	{
		for (int i = 0; i <= (x - 2); i++)
		{
			if (v.at(i) > v.at(i + 1))
			{
				int temp = v.at(i);
				v.at(i) = v.at(i + 1);
				v.at(i + 1) = temp;
			}
		}
	}
}
vector<int> removeDuplicates(vector<int> &v)
{
	vector<int> intersec;
	vector<int> duplic;
	int i = 0;
	while (i < v.size())
	{
		bool found = false;
		int x = 0;
		int dsize = duplic.size();
		while (x < dsize)
		{
			if (duplic[x] == v[i])
			{
				found = true;
				break;
			}
			x++;
		}
		if (found)
		{
			vector<int> newv;
			
			for (int i2 = 0; i2 < v.size(); i2++)
			{
				if (i2 == i)
				{
					intersec.push_back(v[i2]);
					continue;
				}
				else
				{
					newv.push_back(v[i2]);
				}
			}
			v = newv;
		}
		else
		{
			duplic.push_back(v[i]);
			i++;
		}
	}
	return intersec;
}
vector<int> uni(const vector<int> &v1, const vector<int> &v2)
{
	vector<int> vunion;
	for (int i = 0; i < v1.size(); i++)
	{
		vunion.push_back(v1[i]);
	}
	for (int i = 0; i < v2.size(); i++)
	{
		vunion.push_back(v2[i]);
	}
	removeDuplicates(vunion);
	bubblesort(vunion);
	return vunion;
}

vector<int> intersection(const vector<int> &v1, const vector<int> &v2)
{
	vector<int> vunion;
	vector <int> v1temp = v1;
	vector<int> v2temp = v2;
	removeDuplicates(v1temp);
	removeDuplicates(v2temp);
	for (int i = 0; i < v1temp.size(); i++)
	{
		vunion.push_back(v1temp[i]);
	}
	for (int i = 0; i < v2temp.size(); i++)
	{
		vunion.push_back(v2temp[i]);
	}
	bubblesort(vunion);
	vector <int> intersec = removeDuplicates(vunion);
	removeDuplicates(intersec);
	return intersec;
}

int main()
{
	vector<int> test_vector_1 = { 1, 3, 2, 6, 2, 0, 5, 7 };
	vector<int> test_vector_2 = { 1, 4, 6, 0, 1, 4, 5, 7 };
	vector<int> union_vector = uni(test_vector_1, test_vector_2);
	vector<int> intersect_vector = intersection(test_vector_1, test_vector_2);
	cout << "Vetor de Uniao: \n";
	for (int i = 0; i < union_vector.size(); i++)
	{
		cout << "Indice " << i << ": " << union_vector[i] << '\n';
	}
	cout << "\nVetor de Intersecçao: \n";
	for (int i = 0; i < intersect_vector.size(); i++)
	{
		cout << "Indice " << i << ": " << intersect_vector[i] << '\n';
	}

    return 0;
}

