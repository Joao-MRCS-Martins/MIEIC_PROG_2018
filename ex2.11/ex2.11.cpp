// ex2.11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


void somapi(float &soma, int n)
{
	for (int x = 1; n != 0; x++)
	{
		int exp = x + 1;
		int div = 2 * x - 1;
		soma = soma + (float)(pow(-1, exp) * 4) / div;
		n--;
	}
}
void inputvalores(int &n)
{
	cout << "Calcular a serie com quantos termos?: ";
	cin >> n;
}



int fatorial(int x)
{
	int fac;
	for (int i = 0; i <= x; i++)
	{
		if (i == 0)
			fac = 1;
		else
			fac = fac * i;
	}
	return fac;
}
void somae(float &soma, int n)
{
	for (int x = 0; n != 0; x++)
	{
		int div = fatorial(x);
		soma = soma + (float) 1 / div;
		n--;
	}
}

void somax(float &soma, int n, int x)
{
	for (int y = 0; n != 0; y++)
	{
		int div = fatorial(y);
		soma = soma + (double)pow(-1, y) * pow(x, y) / div;
		n--;
	}
}

void ex211a()
{
	int n = 1;
	inputvalores(n);
	float soma = 0;
	somapi(soma, n);
	cout << "A soma e: " << soma << endl;
}

void ex211b()
{
	int n = 1;
	inputvalores(n);
	float soma = 0;
	somae(soma, n);
	cout << " A soma e: " << soma << endl;
}

void ex211c()
{
	int x;
	int n = 1;
	inputvalores(n);
	cout << " Qual o valor do expoente de e?: ";
	cin >> x;
	float soma = 0;
	somax(soma, n,x);
	cout << " A soma e: " << soma << endl;
}
int main()
{
	char x;
	cout << "Qual alinea quer ver? ";
	cin >> x;
	if (toupper(x) == 'A')
		ex211a();
	else if (toupper(x) == 'B')
		ex211b();
	else if (toupper(x) == 'C')
		ex211c();
	else
		cout << "Exercicio nao encontrado" << endl;

	return 0;
}

/*
//em vez de introduzir o numero de termos
//perguntar para que variação entre duas iteracoes é preciso
// ser superior
double var;
cout << "Que variação máxima a soma tem de manter? ";
cin >> var;
//dentro do ciclo para calcular a soma, colocar uma condicao para verificar a variacao
if ((soma - (soma + alteracao)) < var)
	break;

*/