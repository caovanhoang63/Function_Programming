#include <iostream>
using namespace std;
float Tong(float x,int n)
{
	float s = 1;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t *= x;
		s += (i+1) * t;
		i++;
	}
	return s;
}
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "S(" << x << "," << n << ") = " << Tong(x, n);
	return 0;
}