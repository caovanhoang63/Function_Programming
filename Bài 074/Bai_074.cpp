#include <iostream>
using namespace std;
float x;
int n;
float s = 0;
void Nhap(float& x, int& n)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n ";
	cin >> n;
}
float XuLy(float x, int n,float&s)
{
	float t = 1;
	int m = 1;
	int i = 1;
	while (i<=n)
	{
		t *= x;
		m *= i;
		s += t / m;
		i++;
	}
	return s;
}
void Xuat(float x, int n,float s)
{
	cout << "x = " << x << endl;
	cout << " n = " << n << endl;
	cout << "Tong cua day so la " << s;
}
int main()
{
	Nhap(x, n);
	XuLy(x, n, s);
	Xuat(x, n, s);
	return 0;
}