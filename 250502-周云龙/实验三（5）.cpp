#include<iostream>
using namespace std;
int add(int n) {
	if (n == 10) {
		return 1;
	}
	else {
		return(add(n + 1) + 1) * 2;
	}
}
int main() {
	int total = add(1);
	cout << "第一天共摘了" << total<<"个桃子" << endl;
	return 0;
}