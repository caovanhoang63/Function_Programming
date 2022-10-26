#include <iostream>
using namespace std;
float Tong(int n)
{
	float s = 0;
	int m = 0;
	int dau = 1;
	int i = 1;
	while (i<=n)
	{
		m += i;
		s += (float)dau / m;
		dau = -dau;
		i++;
	}
	return s;
}
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(" << n << ") = " << Tong(n);
	return 0;
}