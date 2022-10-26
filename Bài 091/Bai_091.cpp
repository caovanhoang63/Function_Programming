#include <iostream>
using namespace std;
float Tong(float x, int n)
{
	float s = -1;
	float t = 1;
	int m = 1;
	int dau = -1;
	int i = 2;
	while (i<=2*n)
	{
		t *= x * x;
		m *= i * (i - 1);
		dau = -dau;
		s += dau * t / m;
		i += 2;
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
	cout << "S(" << x << "," << n << ") = " << Tong(x, n);
	return 0;
}