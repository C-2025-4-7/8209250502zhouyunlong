#include<iostream>
using namespace std;
int main()
{   
	char lower = 'a';
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û" << endl;
	cin >> lower;
	if (lower >= 'a' && lower <= 'z')
	{
		const  char upper = lower - 32;
		cout<< upper <<endl;
	}
	else {
	    const	char upper = lower + 1;
		cout << static_cast<int>(upper)<< endl;
	}
	return 0;
}