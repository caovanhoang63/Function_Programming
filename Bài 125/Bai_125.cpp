#include <iostream>
using namespace std;

float abs(float& a,float&);
float Xuat(float a, float b);
int main()
{
	int a, b;
	cout << "Nhap a,b: ";
	cin >> a >> b;

	Xuat(a, b);
	return 0;
}
float abs(float& a,float&b)
{
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
}
float Xuat(float a, float b)
{
	cout << "a = " << a;
	cout << "b = " << b;
}