#include <iostream>
using namespace std;

float MAX(float&, float&);
int main()
{
	float a, b;
	cin >> a >> b;
	cout<<MAX(a, b);
	return 0;
}
float MAX(float&a, float&b) 
{
	float lc = a;
	if (lc < b)
		lc = b;
	return lc;
}