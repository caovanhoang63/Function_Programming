#include <iostream>
using namespace std;
void Nhap(int& n, float& r)
{
	cout << "Nhap so canh: ";
	cin >> n;
	cout << "Nhap ban kinh: ";
	cin >> r;
}
float DienTich(int n, float r)
{
	return n * r * r * sin(2 * 3.14 / n) / 2;
}
int main()
{
	int n;
	float r;
	Nhap(n, r);
	cout << "Dien tich cua da giac la " << DienTich(n, r);
	return 0;
}