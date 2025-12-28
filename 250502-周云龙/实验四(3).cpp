#include<iostream>
using namespace std;


int main() {
	const int n = 100;
	bool arr[n] = { false };
	for (int student = 1; student <= n; student++) {
		for (int carrige = student - 1; carrige < n; carrige+=student) {
			arr[carrige] = !arr[carrige];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i])
		{
			cout << (i + 1) << " ";
		}
	}
	return 0;
}