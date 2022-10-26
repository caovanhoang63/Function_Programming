#include <iostream>
using namespace std;
bool KiemTra(int n) {
	bool flag = 1;
	while (n>1) {
		int dv = n % 2;
		if (dv == 1)
			flag = 0;
		n /= 2;
	}
	return flag;
	if (flag)
		cout << "co dang 2^m";
	else
		cout << "ko co dang 2^m";
	
}
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout<<KiemTra(n);
	return 0;
}
