// ex3.9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

double integrateTR (double f(double) , double a , double b, int n)
{
	cout << fixed << setprecision(3);
	double h = (b - a) / n;
	double soma = 0;
	double areaTR;
	for (int i = 1; i <= n; i++)
	{
	 areaTR = h / 2 * (f(a + (i - 1)*h) + f(a + i * h));
		soma += areaTR;
	}
	return soma;
}

double g(double n) {
	return pow(n, 2);
}

double h(double n) {
	return sqrt(4 - pow(n, 2));
}

int main()
{
	double f(double x);
	double a, b;
	int n;
	/*cout << "Qual a funcao a integrar, intervalos inferior e superior e num de divisoes?: ";
	cin >> f(x) >> a >> b >> n;*/
	cout << "Qual o intervalo (a,b) e numero de divisoes da funcao g? ";
	cin >> a >> b >> n;
	cout << "O integral aproximado tem o valor de: " << integrateTR(g,a,b,n) << endl;
	cout << "Qual o intervalo (a,b) e numero de divisoes da funcao h? ";
	cin >> a >> b >> n;
	cout << "O integral aproximado tem o valor de: " << integrateTR(h, a, b, n) << endl;
	return 0;
}

