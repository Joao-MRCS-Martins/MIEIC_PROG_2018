// ex2.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float a, b, c, d, e, f;
	cout << "Qual o valor de a? : ";
	cin >> a;
	cout << "Qual o valor de b? : ";
	cin >> b;
	cout << "Qual o valor de c? : ";
	cin >> c;
	cout << "Qual o valor de d? : ";
	cin >> d;
	cout << "Qual o valor de e? : ";
	cin >> e;
	cout << "Qual o valor de f? : ";
	cin >> f;
	float x = (c*e - b * f) / (a*e - b * d);
	float y = (a*f - c * d) / (a*e - b * d);
	float denom = (a*e - b * d);
	float numx = (c*e - b * f);
	float numy = (a*f - c * d);
	if ((numx != 0 && denom == 0) ||(numy != 0 && denom == 0))
		cout << "Sistema impossivel" << endl;
	else if ((numx=0 && denom == 0) || (numy == 0 && denom == 0))
		cout << "Sistema indeterminado" << endl;
	else
	{
		cout << " O valor de x e: " << x << endl;
		cout << " O valor de y e: " << y << endl;
	}
}


