#include <iostream>
using namespace std;
float Tong(float x, int n)
{
	float s = 0;
	float m = 1;
	int i = 0;
	while (i <= n)
	{
		m *= (x+i);
		s += 1/m;
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