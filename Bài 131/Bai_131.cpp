#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;
void Nhap(DIEM&);
bool KtTamGiac(DIEM, DIEM, DIEM);
int main()
{
	DIEM a, b, c;
	Nhap(a);
	Nhap(b);
	Nhap(c);
	if (KtTamGiac(a, b, c))
		cout << "La tam giac";
	else
		cout << "Ko la tam giac";
	return 0;
}
void Nhap(DIEM&P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y:";
	cin >> P.y;
}
bool KtTamGiac(DIEM a , DIEM b , DIEM c )
{
	float A = sqrt(pow(b.x - c.x, 2) + pow(b.y - c.y, 2));
	float B = sqrt(pow(c.x - a.x, 2) + pow(c.y - a.y, 2));
	float C = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
	if (A < B + C && C < B + A && B < A + C)
		return 1;
	else
		return 0;
}
