#include <iostream>
#include "windows.h"
#define _USE_MATH_DEFINES   
#include "math.h" 
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y,h=0.2;
	cout << "Уведіть x = ";
	cin >> x;
	do
	{
		y = tan(pow(x * M_PI / 180., 3.)) + 2. * sin(x * M_PI / 180.) - 3.;
		cout << "x= " << x << " " << "y= " << y << endl;
		x += h;
	} while (x <= 3.0);
	
	system("pause");
	return 0;
}