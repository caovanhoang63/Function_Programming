#include <iostream>
#include <cmath>
bool KtDiem(float, float, float, float, float, float,float,float);
using namespace std;
int main()
{
	float xa;
	cout << "Nhap xa: ";
	cin >> xa;
	float ya;
	cout << "Nhap ya: ";
	cin >> ya;
	float xb;
	cout << "Nhap xb: ";
	cin >> xb;
	float yb;
	cout << "Nhap yb: ";
	cin >> yb;
	float xc;
	cout << "Nhap xc: ";
	cin >> xc;
	float yc;
	cout << "Nhap yc: ";
	cin >> yc;
	float xm;
	cout << "Nhap xm: ";
	cin >> xm;
	float ym;
	cout << "Nhap ym: ";
	cin >> ym;
	if (KtDiem(xa, ya, xb, yb, xc, yc, xm, ym))
		cout << "Nam trong";
	else
		cout << "Nam ngoai";
	return 0;
}
bool KtDiem(float xa, float ya, float xb, float yb, float xc, float yc,float xm, float ym)
{
	float sabc = (1 / 2) * (xa * yb + xb * yc + xc * ya - xb * ya - xc * yb - xa * yc);
	float smac = (1 / 2) * (xm * ya + xa * yc + xc * ym - xa * ym - xc * ya - xm * yc);
	float smbc = (1 / 2) * (xm * yb + xb * yc + xc * ym - xb * ym - xc * yb - xm * yc);
	float smab = (1 / 2) * (xm * ya + xa * yb + xb * ym - xa * ym - xb * ya - xm * yb);
	if (sabc == (smac + smab + smbc))
		return 1;
	else
		return 0;
}


