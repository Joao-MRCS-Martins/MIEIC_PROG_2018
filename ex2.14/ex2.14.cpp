// ex2.14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int numerocasas(double delta)
{
	int x = 0;
	for (; delta < 1; x++)
	{
		delta *= 10;
	}
	return x;
}

void raizaprox(double n, double rq, double &rqn)
{
	rqn = (rq + n / rq) / 2;
}

int main()
{
	double n, rq=1, rqn, rqn2, dif, delta, maxIter;
	cout << " Qual o numero calcular, delta limite e numero maximo de iteracoes? ";
	cin >> n >> delta >> maxIter;
	raizaprox(n, rq, rqn);
	rqn2 = pow(rqn, 2);
	dif = n - rqn2;
	for (int x = 0; dif < delta && x < maxIter; x++)
	{
		raizaprox(n, rq, rqn);
		rqn2 = pow(rqn, 2);
		dif = n - rqn2;
		rq = rqn;
	}
	int casas = numerocasas(delta);
	rqn = floor(rqn * pow(10, casas) + 0.5) / pow(10, casas);
	cout << " A raiz aproximada e: " << rqn << endl;

    return 0;
}

