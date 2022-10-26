#include <iostream>
using namespace std;
float Tong(float x, int n)
{
	float s = x;
	float t = x;
	int dau = 1;
	for (int i = 1; i <2* n+1; i+=2)
	{
		t *= x * x;
		dau = -dau;
		s += dau * t;
	}
	return s;
}
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(" <<x<<"," << n << ") = " << Tong(x, n);
	return 0;
}