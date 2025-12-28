#include<iostream>
#include <algorithm> 
using namespace std;
int gcd(int a, int b) {
	a = abs(a);
	b = abs(b);
	while(b!=0)
	{
		int t = b;
		b = a % b;
		a = t;
	}
	return a;
}
int lcn(int a, int b) {
	if (a == 0 || b == 0) {
		cout << "´íÎó";
		return -1;
	}
	return(a / gcd(a, b)) * b;
}
int main() {
int m, n;
cin>> m >> n;
int a = gcd(m, n);
int b = lcn(m, n);
cout <<a<<" "<< b << endl;
return 0;
}
