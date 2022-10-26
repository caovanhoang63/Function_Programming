#include <iostream>
using namespace std;
void Nhap(float& r)
{
	cout << "Nhap ban kinh: ";
	cin >> r;
}
float TheTich(float r)
{
	return 4 * 3.14 * r * r / 3;
}
int	main()
{
	float r; 
	Nhap(r);
	cout << "The tich cua hinh cau la " << TheTich(r);
	return 0;
}