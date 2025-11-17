#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float c,F;
	cout << "请输入华氏温度" << endl;
	cin >> F;
	c = (F - 32) / 1.8;
	cout<<"摄氏温度为" << fixed << setprecision(2) << c << endl;
	return 0;
}

