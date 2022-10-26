#include <iostream>
using namespace std;
float Tong(int n)
{
	float s = 0;
	int t = 1;
	for (int i = 1; i <= n; i++)
	{
		t *= i;
		s = pow(t + s,(float)1/(i+1));
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