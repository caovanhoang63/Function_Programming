#include <iostream>
using namespace std;
float Tong(float x, int n)
{
	float s = 0;
	float t = sin(x);
	int i = 1;
	while (i <= n)
	{
		s += t;
		t *= sin(t);
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