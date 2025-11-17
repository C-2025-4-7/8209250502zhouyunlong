#include<iostream>
using namespace std;
int main() {
	double a = 0.8;
	int b = 2;
	int c = 0;
	int days = 0;
	while (c <= 100) 
	{
		days++;
		c += b;
		b *= 2;
		cout << "总苹果数为" << c <<"个" << endl;
	}
	double  d = c * a / days;
	cout << "平均每天花费" << d<<"元" << endl;
	return 0;
}