#include<iostream>
using namespace std;
int main() {
	const int Max_Size = 10;
	int   unique_nums[Max_Size];
	int   count = 0;
	cout << "请输入十个数" << endl;
	for (int i = 0; i < 10; i++) {
		int num;
		cin >> num;
		bool is = false;
		for (int j = 0; j < count; j++) {
			if (unique_nums[j] == num)
			{
				is = true;
				break;
			}
		}
		if (!is) {
			unique_nums[count] = num;
			count++;
		}
	}cout << "The distinct numbers are: ";
	for (int i = 0; i < count; i++) {
		cout << unique_nums[i] << " ";
	}
	cout << endl;
	return 0;
}