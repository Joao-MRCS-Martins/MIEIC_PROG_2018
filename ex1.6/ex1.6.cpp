// ex1.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	float x1, y1, x2, y2, x3, y3;
	cout << " Quais são as coordenadas do ponto 1? ";
	cin >> x1;
	cin >> y1;
	cout << " Quais são as coordenadas do ponto 2? ";
	cin >> x2;
	cin >> y2;
	cout << " Quais são as coordenadas do ponto 3? ";
	cin >> x3;
	cin >> y3;
	float dist1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float dist2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	float dist3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	float sp = (dist1 + dist2 + dist3) / 2;
	float area = sqrt(sp * (sp - dist1) * (sp - dist2) * (sp - dist3));
	cout << " A area do triangulo e: " << area << endl;

}

