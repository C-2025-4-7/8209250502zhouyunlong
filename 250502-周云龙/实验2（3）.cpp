#include<iostream>
using namespace std;
int main()
{
	int a, b, c, C;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		C = a + b + c;
		cout <<" 周长为 "<<C<< endl;
	}
	else {
		cout << "构不成三角形" << endl;
	}
	return 0;
}