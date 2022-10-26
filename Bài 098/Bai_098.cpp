#include <iostream>
using namespace std;
float Tong(int n)
{
	float s = 0;
	int i = 2;
	while (i<=n)
	{
		s = pow(s + i, (float)1 / i);
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