#include <iostream>
using namespace std;
int Fibo(int n);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = Fibo(n);
	cout << "So hang thu " << n << " la " << kq;
	return 0;
}
int Fibo(int n)
{
	int ftt = 1;
	int ft = 1;
	int i = 2;
	int fhh;
	while (i <= n)
	{
		fhh = ft + ftt;
		ftt = ft;
		ft = fhh;
		i++;
	}
	return fhh;
}