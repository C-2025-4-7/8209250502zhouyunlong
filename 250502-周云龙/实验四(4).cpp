#include<iostream>
using namespace std;


void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int i = 0, j = 0, k = 0;
	while (i < size1 && j < size2) {
		if (list1[i] > list2[j]) {
			list3[k++] = list1[i++];
		}
		else
		{
			list3[k++] = list2[j++];
		}
	}
	while (i < size1) {
		list3[k++] = list1[i++];
	}
	while (j < size2) {
		list3[k++] = list2[j++];
	}
}
int main() {
	const int max = 80;
	int size1, size2;
	int list1[max], list2[max];
	int list3[max * 2];
	cout << "Enter list1:";
	cin >> size1;
	if (size1 <0 || size1 > max){
		cout << "error";
		return 1;
	}
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	cout << "Enter list2:";
	cin >> size2;
	if (size2 <0 || size2 > max) {
		cout << "error";
		return 1;
	}
	for (int j = 0; j < size2; j++) {
		cin >> list2[j];
	}
	merge(list1, size1, list2, size2, list3);
	for (int x = 0; x < size1 + size2; x++)
	{
		cout << list3[x]<<" ";
	}
	return 0;
}