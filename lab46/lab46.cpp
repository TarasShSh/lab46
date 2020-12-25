// lab46.cpp
// Шевченко Тарас
// Лабораторна робота № 4.6
// Вкладені цикли
// Варіант 23
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	double P, S;
	int i, k;

	i = 1;
	S = 0;

	while (i <= 15)
	{
		P = 1;
		k = 1;
		while (k <= i)
		{
			P *= (sin(10 * i) + cos(10 * i)) / (sqrt(k));
			k++;
		}
		S += P;
		i++;
	}
	cout << "1. S = " << S << endl;

	i = 1;
	S = 0;
	do
	{
		P = 1;
		k = 1;
		do
		{
			P *= (sin(10 * i) + cos(10 * i)) / (sqrt(k));
			k++;
		} while (k <= i);
		S += P;
		i++;
	} while (i <= 15);
	cout << "2. S = " << S << endl;

	S = 0;
	for ( i = 1; i <= 15; i++)
	{
		P = 1;
		for ( k = 1; k <= i; k++)
		{
			P *= (sin(10 * i) + cos(10 * i)) / (sqrt(k));
		}
		S += P;
	}
	cout << "3. S = " << S << endl;

	S = 0;
	for (i = 15; i >= 1; i--)
	{
		P = 1;
		for (k = i; k >= 1; k--)
		{
			P *= (sin(10 * i) + cos(10 * i)) / (sqrt(k));
		}
		S += P;
	}
	cout << "4. S = " << S << endl;

}