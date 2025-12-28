#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int parseHex(const char* const hexString) {
	int result = 0;
	int length = strlen(hexString);
	for (int i = 0; i < length;++i){
		char c = tolower(hexString[i]);
		int digit = 0;
		if (c >= '0' && c <= '9') {
			digit = c - '0';}
		else if (c >= 'a' && c <= 'f') {
			digit = 10 + (c - 'a');
		}
		else {
	cout << "超出范围" << endl;
	continue;
	}
		result = result * 16 + digit;
	}
	return result;
}
int main() {
	char input[100];
	
	cout << "请输入一个16进制数" << endl;
	cin>>input ;
	int result = parseHex(input);
	cout <<"转换后的数字是" << result << endl;
}