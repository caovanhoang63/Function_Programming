#include <iostream>
using namespace std;
bool KtBDT(float, float, float);
int main()
{
	float x, y, z;
	cin >> x >> y >> z;
	if (KtBDT(x, y, z))
		cout << "dung";
	else
		cout << "ko dung";
	return 0;
}
bool KtBDT(float x , float y, float z)
{
	if (x <= y && y <= z)
		return 1;
	else
		return 0;
}
