#include<iostream>

using namespace std;
bool is_prime(int num) {

	if (num <= 1) {
		return false;
	}
	if (num == 2) {
		return true;
	}
	if (num % 2 == 0) {
		return false;
	}
	for (int i = 3; i <= sqrt(num); i += 2)
	{
		if (num % i == 0) {
			return false;
		}

	}
	return true;
}
int main() {
	int t = 0;
	int num = 2;
	while (t < 200) {
		if (is_prime(num)) {
			t++;
			cout << num<<" ";
			if (t % 10 == 0) {
				cout << endl;
			}
		}num++;
	}
	return 0;
}






