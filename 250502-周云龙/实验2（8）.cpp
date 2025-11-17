#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double a, xn, xn1;
	const double b = 1e-5;
	cout << "请输入a" << endl;
	cin >> a;
	if (a < 0) {
		cout << "负数没有平方根" << endl;
		return 1;
	}
	else if (a == 0) {
		cout << "0的平方根是0" << endl;
		return 0;
	}
	xn = a;
	xn1 = 0.5 * (xn + a / xn);
	
	while (fabs(xn1 - xn) >= b) 
	{
		xn = xn1;
        xn1 = 0.5 * (xn + a / xn);
	}
	cout << a << "的平方根为" << fixed << setprecision(6) << xn1 << endl;
	return 0;
}