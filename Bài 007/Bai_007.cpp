#include <iostream>
using namespace std;
void Nhap(float& c)
{
	cout << "Nhap do c ";
	cin >> c;
}
float ChuyenDoi(float c)
{
	return 9 * c / 5 + 32;
}
void XuatChuyenDoi(float c)
{
	cout << "Nhiet do F " << ChuyenDoi(c);
}
int main()
{
	float c;
	Nhap(c);
	XuatChuyenDoi(c);
	return 0;
}