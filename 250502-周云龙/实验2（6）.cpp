#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	while (b != 0) 
	{
		int reminder = a % b;
		a = b;
		b = reminder;
	}
	return a;
}
int  lcm(int a, int b)
{
	return a * b / gcd(a, b);
}
int main()
{
	int n1, n2;
	cout << "请输入两个正整数" << endl;
	cin >> n1 >> n2;
	if (n1 <= 0 || n2 <= 0)
	{
		cout << "错误，请输入正整数" << endl;
		return 1;
	}
	else
	{
		cout << "最大公约数是" << gcd(n1, n2) << endl;
		cout << "最小公约数是" << lcm(n1, n2) << endl;
	}
	return 0;
}