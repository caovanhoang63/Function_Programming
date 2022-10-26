#include <iostream>
#include <cmath>
using namespace std;
float TinhTong(int n) {
	float s = 0;
	for (int i = 1; i <= n; i++) {
		s = pow(s + i, (float)1 / (i + 1));
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	cout << "Tong cua day so la " << TinhTong(n);
	return 0;
}