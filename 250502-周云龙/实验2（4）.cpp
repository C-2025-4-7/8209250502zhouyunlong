#include<iostream>
using namespace std;
int main()
{
	double a,b;
	char  x;
	cout << "请输入数字a,运算符，数字b" << endl;
    cin >> a >>x>> b;
		switch (x)
		{
		 case'+':
			 cout << a << "+" << b << "=" << a + b << endl;
			 break;
		  case'-':
			  cout << a << "-" << b << "=" << a - b << endl;
			  break;
		  case'*':<< b << "=" << a * b << endl;
			  break;
		  case'/':
			if (b == 0)
			{
				cout << "商不存在" << endl;
				break;
			}
			else 
			{
				cout << a << "/" << b << "=" << a / b << endl;
				break;
			}
	    }	
	return 0;
}
