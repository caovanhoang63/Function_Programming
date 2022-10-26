#include <cmath>
#include <iostream>
using namespace std;
void Nhap(int& n,float& r )
{
	cout << "Nhap so canh: ";
	cin >> n;
	cout << "Nhap ban kinh: ";
	cin >> r;
}
float ChuVi(int n, float r)
{
	return 2 * 3.14 * r * sin(3.14 / r);
}
int main()
{
	int n;
	float r;
	Nhap(n, r);
	cout << "Chu vi cua da giac la " << ChuVi(n, r);
	return 0;
}