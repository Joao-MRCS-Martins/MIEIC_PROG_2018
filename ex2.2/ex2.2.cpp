// ex2.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;




double ex22a(double a=0,double b=0,double c=0,int val=0)
{
	double maior, menor;
	cout << "Quais sao os 3 valores?" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (val!=0)
	{
		if ((a > b) && (a > c))
		{
			maior = a;
			if ((b > c))
				menor = c;
			else
				menor = b;
		}
		else if ((b > a) && (b > c))
		{
			maior = b;
			if ((a > c))
				menor = c;
			else
				menor = a;
		}
		else
		{
			maior = c;
			if ((b > a)) menor = a;
			else menor = b;
		}
		return maior;
	}
	if ((a > b) && (a > c))
	{
		maior = a;
		if ((b > c))
			menor = c;
		else
			menor = b;
	}
	else if ((b > a) && (b > c))
	{
		maior = b;
		if ((a > c))
			menor = c;
		else
			menor = a;
	}
	else
	{
		maior = c;
		if ((b > a)) menor = a;
		else menor = b;
	}
	cout << " O numero maior e " << maior << " e o numero menor e " << menor << endl;
	return maior;
}

void ex22b()
{
	double d, e, f, maior,menor;
	cout << "Quais sao os 3 numeros?" << endl;
	cin >> d;
	cin >> e;
	cin >> f;
	if ((d > e) && (d > f))
	{
		maior = d;
		if ((e > f))
			menor = f;
		else
			menor = e;
	}
	else if ((e > d) && (e > f))
	{
		maior = e;
		if ((d > f))
			menor = f;
		else
			menor = d;
	}
	else
	{
		maior = f;
		if ((e > d)) menor = d;
		else menor = e;
	}

	if ((maior == d) && (menor == e))
		cout << " A ordem decrescente dos numeros e: " << d << " " << f << " " << e << endl;
	else if ((maior == d) && (menor == f))
		cout << " A ordem decrescente dos numeros e: " << d << " " << e << " " << f << endl;
	else if ((maior == e) && (menor == d))
		cout << " A ordem decrescente dos numeros e: " << e << " " << f << " " << d << endl;
	else if ((maior == e) && (menor == f))
		cout << " A ordem decrescente dos numeros e: " << e << " " << d << " " << f << endl;
	else if ((maior == f) && (menor == d))
		cout << " A ordem decrescente dos numeros e: " << f << " " << e << " " << d << endl;
	else if ((maior == f) && (menor == e))
		cout << " A ordem decrescente dos numeros e: " << f << " " << d << " " << e << endl;

}

void ex22c()
{
	double a, b, c, maior;
	cout << "Quais os valores a verificar?" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a <= 0) || (b <= 0) || (c <= 0))
		cout << "Valores errados, nao positivos." << endl;
	if ((a > b) && (a > c))
	{
		maior = a;
		if (b + c <= a)
			cout << " Nao e possivel formar um triangulo com estas medidas." << endl;
		else cout << " Estas medidas podem formar um triangulo" << endl;
		
	}
	else if ((b > a) && (b > c))
	{
		maior = b;
		if (a + c <= b)
				cout << " Nao e possivel formar um triangulo com estas medidas." << endl;
			else cout << " Estas medidas podem formar um triangulo" << endl;
	}
	else
	{
		maior = c;
		if (b + a <= c)
			cout << " Nao e possivel formar um triangulo com estas medidas." << endl;
		else cout << " Estas medidas podem formar um triangulo" << endl;
	}

}

int main()
{
	char x;
	cout << "Qual alinea quer ver?" << endl;
	cin >> x;
	if (toupper(x) == 'A')
		ex22a();
	else if (toupper(x) == 'B')
		ex22b();
	else if (toupper(x) == 'C')
		ex22c();
	else
		cout << "exercicio nao encontrado" << endl;
}