#include<iostream>
#include<cstring>

int indexof(const char* s1, const char* s2) {
	if (s1 == NULL || s2 == NULL)
	{
		return -1;
	}
	if(*s1 =='\0')
	{
		return 0;
	}
	int  len1 = strlen(s1);
	int  len2 = strlen(s2);
	if (*s2 == '\0' || len1 > len2) {
		return -1;
	}
	for (int i = 0; i <= len2 - len1; ++i) {
		bool isMatch = true;
		for (int j = 0; j < len1; ++j) {
			if (s2[i + j] != s1[j]) {
				isMatch = false;
				break;
			}
		}
		if (isMatch) {
			return i;
		}
	}return -1;
}
int main() {
	
	char s1 [1024];
	char s2[1024];
	std::cout << "请输入字符串s1";
	std::cin.getline(s1, sizeof(s1));
	std::cout << "请输入字符串s2" ;
	std::cin.getline(s2, sizeof(s2));
	int result = indexof(s1, s2);
	if (result != -1) {
		std::cout << "s1 是 s2 的子串，起始下标为：" << result << std::endl;
	}
	else {
		std::cout << "s1不是s2的子串" << std::endl;
	}
	return 0;

}