#include <iostream>
using namespace std;
float Tong(float x, int n)
{
	float s = -1;
	float t = x;
	int m = 1;
	int dau = -1;
	int i = 1;
	while (i <= 2 * n +1)
	{
		s += dau * t / m;
		i += 2;
		t *= x * x;
		m *= i * (i - 1);
		dau = -dau;
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