 // Lab_04_3.cpp
 // < Кузів Назар >
 // Лабораторна робота № 4.3
 // Табуляція функції, заданої формулою:функція з параметрами
 // Варіант 6

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std ;

int main()
{
	double x, xp, xk, dx, a, b, c, F;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "F" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (c < 0 && b != 0)
			F = a * pow(x, 2) + pow(b, 2) * x;
		else
			if (c > 0 && b == 0)
				F = (x + a) / (x + c);
			else
				F = x / c;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(2) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
	
}