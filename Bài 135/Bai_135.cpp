#include <iostream>
using namespace std;

bool NamNhuan(int n);
int main()
{
	int n;
	cout << "Nhap n : ";
	cin >> n;
	if (NamNhuan(n))
		cout << "la nam nhuan";
	else
		cout << "Ko la nam nhuan";
	return 0;
}
bool NamNhuan(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
		return 1;
	else
		return 0;
}
