// ex1.4.cpp : Defines the entry point for the console application.
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
	cout << " O valor de x e: " << x << endl;
	cout << " O valor de y e: " << y << endl;

}

