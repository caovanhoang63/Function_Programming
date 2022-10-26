#include <iostream>
using namespace std;
float SoHang(int n);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = SoHang(n);
	cout << "So hang thu " << n << " la " << kq;
	return 0;
}
float SoHang(int n)
{
	float at = 1;
	int i = 2;
	float ahh;
	while (i<=n)
	{
		ahh = (at * at + 2) / (2 * at);
		at = ahh;
		i++;
	}
	return ahh;
}