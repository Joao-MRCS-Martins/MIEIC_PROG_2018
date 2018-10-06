// ex4.10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

void removeDuplicates(vector<int> &v)
{
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
}

int main()
{
	vector<int> v;
	v.push_back(4);
	v.push_back(7);
	v.push_back(3);
	v.push_back(4);
	v.push_back(2);
	v.push_back(7);
	v.push_back(5);
	removeDuplicates(v);
	int vsize = v.size();
	for (int i = 0; i < vsize; i++)
	{
		cout << v.at(i) << endl;
	}

	return 0;
}

