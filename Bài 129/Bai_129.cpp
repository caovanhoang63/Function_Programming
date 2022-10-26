#include <iostream>
using namespace std;

void SapTang(float&, float&,float&);
int main()
{
	float a, b,c;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	SapTang(a, b,c);
	return 0;
}
void SapTang(float& a, float& b,float&c)
{
	if (a > b)
	{
		float temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		float temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		float temp = b;
		b = c;
		c = temp;
	}
	cout << "Theo thu tu tang dan: " << a << "," << b<<","<<c;
}