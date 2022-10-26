#include <iostream>
using namespace std;
void Nhap(float& r)
{
	cout << "Nhap ban kinh: ";
	cin >> r;
}
float DienTich(float r)
{
	return 3.14 * r * r;
}
int main()
{
	float r;
	Nhap(r);
	cout << "Dien tich hinh tron la " << DienTich(r);
	return 0;
}