#include <iostream>
using namespace std;
float Tong(float x, int n)
{
	float s = 0;
	float t = 1;
	for (int i = 1; i <= n; i++)
	{
		t *= x;
		s = sqrt(s + t);

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