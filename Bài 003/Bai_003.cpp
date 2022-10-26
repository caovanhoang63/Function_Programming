#include <iostream>
using namespace std;
void Nhap(float& r)
{
	cout << "Nhap ban kinh: ";
	cin >> r;
}
float ChuVi(float r)
{
	return 2 * 3.14 * r;
}
int main()
{
	float r;
	Nhap(r);
	cout << "Chu vi cua hinh tron la " << ChuVi(r);
	return 0;
}