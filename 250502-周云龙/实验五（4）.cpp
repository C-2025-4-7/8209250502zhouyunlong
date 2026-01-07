#include<iostream>
using namespace std;
class a {
	
	
public:
	int id;
	int score;
	a(int i,int s):id(i),score(s){}
};
	void max(a* arr, int n) {
		int maxIndex = 0;
		for (int  i= 1; i < n;i++)
		{
			if (arr[i].score > arr[maxIndex].score) {
				maxIndex = i;
			}
		}cout << "得最高分的学生的学号是"<<arr[maxIndex].id;
	}

int main() {
	a arr[5] = {
	a(1,100),
	a(2,85),
    a(3,90),
	a(4,65),
	a(5,95)
	};
	max(arr, 5);
	return 0;
}