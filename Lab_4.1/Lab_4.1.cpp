// Lab_4.1.cpp
// Дорожовець Володимир
// Лабораторна робота № 4.1
// Цикли.
// Варіант 0.6
#include <iostream>

using namespace std;

int main()
{
	double P;
	int k, N;

	cout << "N = "; cin >> N;
	cout << endl;

	k = N;
	P = 1;
	while (k <= 19)
	{
		P *= ((k * 1.0 - N * 1.0) / (k * 1.0 + N * 1.0) + 1);
		k++;
	}
	cout << "P = " << P << endl;

	k = N;
	P = 1;
	do {
		P *= ((k * 1.0 - N * 1.0) / (k * 1.0 + N * 1.0) + 1);
		k++;
	} while (k <= 19);
	cout << "P = " << P << endl;

	P = 1;
	for (k = N; k <= 19; k++)
	{
		P *= ((k * 1.0 - N * 1.0) / (k * 1.0 + N * 1.0) + 1);
	}
	cout << "P = " << P << endl;

	P = 1;
	for (k = 19; k >= N; k--)
	{
		P *= ((k * 1.0 - N * 1.0) / (k * 1.0 + N * 1.0) + 1);
	}
	cout << "P = " << P << endl;

	cin.get();
	return 0;
}
