#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;
	cout << "output in unsigned int 1 type" << testUnint << endl;
	cout << "output in char type" << static_cast<char>(testUnint) << endl;
	cout << "output in int type" << static_cast<char>(testUnint) << endl;
	cout << "output in double type" << static_cast<char>(testUnint) << endl;
	cout << "output in char type" << static_cast<char>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Oct unsigned int type :" << oct << testUnint << endl;
	cout << oct << endl;
	cin >> testUnint;
	cout << testUnint << endl;
	return 0;
}
