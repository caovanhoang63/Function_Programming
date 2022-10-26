#include <iostream>
#include <cmath>
using namespace std;
void LKNamNhuan(int x,int y);
int main()
{
	int x;
	cout << "Nhap nam x: ";
	cin >> x;

	int y;
	cout << "Nhap nam y: ";
	cin >> y;
	LKNamNhuan(x, y);
	
	return 1;
}
void LKNamNhuan(int x,int y)
{
	int n = x;
	while (n <= y)
	{
		if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
			cout << "Nam nhuan la: " << n << endl;
		n = n + 1;

	}
}