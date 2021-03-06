// ex3.6.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

bool bissexto(int ano)
{
	if (ano % 400 == 0)
		return true;
	else if (ano % 4 == 0 && ano % 100 != 0)
		return true;
	else return false;
}

int dias_mes(int ano, int mes)
{
	if (bissexto(ano) == true && mes == 2)
		return 29;
	else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
		return 31;
	else if (mes == 2)
		return 28;
	else return 30;
}

int codigomes(int ano, int mes)
{
	switch (mes)
	{
	case 1:
		if (bissexto(ano) == true)
		{
			return 6;
		}
		else return 0;
		break;
	case 2:
		if (bissexto(ano) == true)
		{
			return 2;
		}
		else return 3;
		break;
	case 3:
		return 3;
		break;
	case 4:
		return 6;
		break;
	case 5:
		return 1;
		break;
	case 6:
		return 4;
		break;
	case 7:
		return 6;
		break;
	case 8:
		return 2;
		break;
	case 9:
		return 5;
		break;
	case 10:
		return 0;
		break;
	case 11:
		return 3;
		break;
	case 12:
		return 5;
		break;
	}

}

string diasemana(int codigo)
{
	switch (codigo)
	{
	case 0:
		return "Sabado";
		break;
	case 1:
		return "Domingo";
		break;
	case 2:
		return "Segunda-feira";
		break;
	case 3:
		return "Terca-feira";
		break;
	case 4:
		return "Quarta-feira";
		break;
	case 5:
		return "Quinta-feira";
		break;
	case 6:
		return "Sexta-feira";
		break;
	}
}

string numeromes(int mes)
{
	switch (mes)
	{
	case 1:
		return "Janeiro";
		break;
	case 2:
		return "Fevereiro";
		break;
	case 3:
		return "Marco";
		break;
	case 4:
		return "Abril";
		break;
	case 5:
		return "Maio";
		break;
	case 6:
		return "Junho";
		break;
	case 7:
		return "Julho";
		break;
	case 8:
		return "Agosto";
		break;
	case 9:
		return "Setembro";
	case 10:
		return "Outubro";
		break;
	case 11:
		return "Novembro";
		break;
	case 12:
		return "Dezembro";
		break;
	}
}

int codigosemana(int dia, int mes, int ano)
{
	int a = ano % 100;
	int c = codigomes(ano,mes);
	int s = floor(ano/100);
	int ds = ((int)floor(5 * a / 4) + c + dia - 2 * (s % 4) + 7) % 7;
	return ds;
}

void calendariomes(int ano, int mes)
{
	int diasmes = dias_mes(ano, mes);
	string nomemes = numeromes(mes);
	cout << nomemes << '/' << ano << endl;
	cout << setw(3) << "Sab\tDom\tSeg\tTer\tQua\tQui\tSex" << endl;
	int stday = codigosemana(1, mes, ano) ;
	cout << "";
	int x = stday;
	while (x > 0)
	{
		cout << "\t";
		x--;
	}
	int posdia = stday+1;
	for (int d = 1 ; d <= diasmes; d++)
	{
		cout << d << "\t";
		if (posdia % 7 == 0)
		{
			cout << endl;
			posdia = 0;
		}
		posdia++;
	}
	cout << endl;
}

int main()
{
	 int ano, mes, dia;
	cout << "Que ano quer ver?: ";
	cin >> ano;
	for (int m = 1; m <= 12; m++)
	{
		calendariomes(ano, m);
		cout << endl;
	}
	char p;
	cout << "Clique qualquer letra para fechar...";
	cin >> p;
	return 0;
}

