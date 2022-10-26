#include <iostream>
using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;
void Nhap(DIEM& P )
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
float KhoangCach(DIEM P,DIEM Q)
{
	return ((P.x-Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}
void Xuat(DIEM P)
{
	cout << "\n x = " << P.x;
	cout << "\n y = " << P.y;
}
int main()
{
	DIEM A, B;
	Nhap(A);
	Nhap(B);
	cout << "Khoach cach giua hai diem la " << KhoangCach(A, B);
	return 0;
}