#include<iostream>
#include<iomanip>
using namespace std;
void swap(int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}
void bubblesort(int listSize,int list[]) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize -1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
		listSize--;
	} while (changed);
}
int main() {
	const int n = 10;
	int arr[n];
	cout << "请输入十个数";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	bubblesort(n, arr);
	cout << fixed << setprecision(2);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}