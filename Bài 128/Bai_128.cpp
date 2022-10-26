#include <iostream>
using namespace std;

void SapTang(float&, float&);
int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	SapTang(a, b);
	return 0;
}
void SapTang(float& a, float& b)
{
	if (a > b)
	{
		float temp = a;
		a = b;
		b = temp;
	}
	cout << "Theo thu tu tang dan: " << a << "," << b;
}