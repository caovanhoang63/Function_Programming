#include <iostream>
using namespace std;
struct So
{
	int ahh;
	int bhh;
};
typedef struct So SO;
void SoHang(int n, SO&);
void Xuat(SO hh);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	SO hh;
	SoHang(n, hh);
	Xuat(hh);
	return 0;
}
void SoHang(int n, SO& hh)
{
	int at = 2, bt = 1, i = 2;
	while (i <= n)
	{
		hh.ahh = at * at + 2 * bt * bt;
		hh.bhh = 2*at*bt;
		i++;
		at = hh.ahh;
		bt = hh.bhh;
	}
}

void Xuat(SO hh)
{
	cout << "ahh la : " << hh.ahh << endl;
	cout << "bhh la : " << hh.bhh;
}


