#include<iostream>
#include<cstring>
#include <cctype>  
using namespace std;

void count(const char s[], int counts[]) {
	for (int i = 0; i < 26; ++i) {
		counts[i] = 0;
	}
	int len = strlen(s);
	for (int i = 0; i < len; ++i) {
		char c = s[i];
	
	if (isalpha(c)) {
		char lower_c = towlower(c);
		int index = lower_c-'a';
		counts[index]++;
	  }
	}
}
int main() {
	const int max = 1000;
	char s[max];
	int counts[26];
	cout << "请输入一个字符串";
	cin.getline(s, max);
	count(s, counts);
	cout << "字母出现的次数(非零)" <<endl;
	for (int i = 0; i < 26;++i) 
	{
		if (counts[i]>0) {
			char letter = 'a' + i;
			cout << letter<<":" << counts[i] << endl;
		}
	}
}