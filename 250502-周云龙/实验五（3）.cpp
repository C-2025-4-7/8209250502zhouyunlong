#include<iostream>
using namespace std;

class V {
private:
	int length;
	int width;
	int height;
	int v;
public:
	void a(){
	cin >> length >> width >> height;
}
	void js() {
		v = length * width * height;
		cout << v << " ";
	}
};



int main() {
	V  tj1, tj2, tj3;
	tj1.a(); tj2.a(); tj3.a();
	
	tj1.js();
	tj2.js();
	tj3.js();
	return 0;
}