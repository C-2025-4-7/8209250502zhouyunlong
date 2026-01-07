#include<iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(int ix = 60, int iy = 80){
		x = ix;
		y = iy;
	}
	void setPoint(int i, int j) {
		x = x + i;
		y = y + j;
	}
	void display() {
		cout << "坐标值为(" << x <<","<<y<< ")" << endl;
	}
};
int main() {
	Point a1(60, 80);
	cout << "初始值" << endl;
	a1.display();
	a1.setPoint(30,40);
	cout << "修改后" << endl;
	a1.display();
	return 0;
}