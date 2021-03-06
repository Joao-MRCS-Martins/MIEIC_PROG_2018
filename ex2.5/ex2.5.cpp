// ex2.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;


int main()
{
	cout << fixed << setprecision(3);
	double a, b, c;
	cout << "Introduza os coeficientes (a b c): ";
	cin >> a;
	cin >> b;
	cin >> c;
	double binom = -(4 * a*c);
	double raizig = -b / (2 * a);
	double raizreal1 = (-b + sqrt(binom)) / (2 * a);
	double raizreal2 = (-b - sqrt(binom)) / (2 * a);
	double raizcomp = (sqrt((4 * a*c) - (b*b))) / (2 * a);

	if (binom == 0)
		cout << "O polinomio tem duas raizes reais iguais: " << raizig << endl;

	else if (binom < 0)
		cout << "O polinomio tem duas raizes complexas: " << raizig << ' + ' << raizcomp << 'i e ' << raizig << ' - ' << raizcomp << endl;
	else if (binom > 0)
		cout << "O polinomio tem duas raizes reais distintas: " << raizreal1 << " e " << raizreal2 << endl;
	return 0;

}

