#include <iostream>
using namespace std;
float Tong(float x,int n)
{
	float s = 0;
	float  t = 1;
	int m = 0;
	int dau = 1;
	int i = 1;
	while (i <= n)
	{
		t *= x;
		m += i;
		dau = -dau;
		s += dau * t / m;
		i++;
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