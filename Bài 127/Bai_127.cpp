#include <iostream>
using namespace std;

float MIN(float&, float&);
int main()
{
	float a, b;
	cin >> a >> b;
	cout << MIN(a, b);
	return 0;
}
float MIN(float& a, float& b)
{
	float lc = a;
	if (lc > b)
		lc = b;
	return lc;
}