#include <iostream>
using namespace std;

void KtTamGiac(float, float, float);
int main()
{
	float x, y, z;
	cout << "Nhap x , y , z";
	cin >> x >> y >> z;
	KtTamGiac(x, y, z);
	return 0;
}
void KtTamGiac(float x, float y, float z)
{
	if (x < y + z && y < x + z && z < y + x)
		cout << "La tam giac";
	else
		cout << "Ko la tam giac";
}