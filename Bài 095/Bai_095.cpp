#include <iostream>
using namespace std;
float Tong(int n)
{
	float s = 0;
	for (int i = n; i >= 1; i--)
	{
		s = sqrt(s + i);
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