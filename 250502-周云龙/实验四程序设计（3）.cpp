#include<iostream>
using namespace std;
void add(int* arr, int n) {
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - 1; ++j) {
			if (*(arr + j) > *(arr + j + i)) {
				int t = *(arr + j);
				*(arr + j) = *(arr + j + i);
				*(arr + j + i) = t;
			}
		}
	}
}
int main() {
	int n;
	cout << "请输入数组元素个数";
	cin >> n;
	int *a = new int[n];
	cout << "请输入"<<n<<"个整数" << endl;
	
	cout << (void*)a << endl;
	for (int i= 0; i < n; i++) {
		cin>>*(a + i);
		cout << "a+" << i << "=" << (void*)(a + i) << "对应地址" << *(a + i) << endl;
	}
	add(a, n);
	cout << "排序后的数组";
	for (int *i = a; i < a+n; i++) {
		cout << *i << " ";
	}cout << endl;
	delete[] a;
	a = NULL;
	return 0;
}