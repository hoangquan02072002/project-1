#include<iostream>
#include <limits.h>
#include<bitset>
using namespace std;
int main()
{
	cout << "NGUYEN LE HOANG QUAN " << endl;
	cout << "group 211-351" << endl;
	cout << "max int:" << INT_MAX << endl;
	cout << "min int:" << INT_MIN << endl;
	cout << "max float: " << FLT_MAX << endl;
	cout << "min float:" << FLT_MIN << endl;
	cout << "max double: " << DBL_MAX << endl;
	cout << "min double:" << DBL_MIN << endl;
	cout << "max char: " << CHAR_MAX << endl;
	cout << "min char:" << CHAR_MIN << endl;
	cout << "sizeof int:" << sizeof(int) << endl;
	cout << "sizeof float:" << sizeof(float) << endl;
	cout << "sizeof double:" << sizeof(double) << endl;
	cout << "sizeof char:" << sizeof(char) << endl;
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	if (a == 0)
	{
		if (b == 0)
		{
			cout << "countless";
		}
		else
		{
			cout << "unreasonable";
		}
	}
	else
	{
		cout << "x=" <<(float) b / a << endl;
	}
	int x, y, z, t;
	cout << "enter coordinates A:";
	cin >> x >> y;
	cout << "enter coordinates B:";
	cin >> z >> t;
	cout << "midpoint coordinates A and B:" << "(" << (x + z) / 2 << ", " << (y + t) / 2 << ")";
}
