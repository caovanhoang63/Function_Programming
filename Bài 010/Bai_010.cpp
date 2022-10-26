#include <iostream>
using namespace std;
struct Diem {
	float x;
	float y;
};
typedef struct Diem DIEM;
void Nhap(DIEM& a) {
	cout << "Nhap x: ";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
}
float Chuvi(DIEM A, DIEM B, DIEM C) {
	float a = sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
	float b = sqrt((A.x - C.x) * (A.x - C.x) + (A.y - C.y) * (A.y - C.y));
	float c = sqrt((C.x - B.x) * (C.x - B.x) + (C.y - B.y) * (C.y - B.y));
	return a + b + c;
}
int main()
{
	DIEM A, B, C;
	Nhap(A);
	Nhap(B);
	Nhap(C);
	cout << "Chu vi cua tam giac la" << Chuvi(A, B, C);
	return 0;
}