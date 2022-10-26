#include <iostream>
using namespace std;
void Nhap(float& r)
{
	cout << "Nhap ban kinh: ";
	cin >> r;
}
float DienTichXungQuanh(float r)
{
	return 4 * 3.14 * r * r;
}
int main()
{
	float r;
	Nhap(r);
	cout << "Dien tich xung quanh cua hinh cau la " << DienTichXungQuanh(r);
	return 0;
}