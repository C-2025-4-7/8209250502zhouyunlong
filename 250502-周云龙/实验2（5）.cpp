#include <iostream>
using namespace std;
int main()
{
	int letters = 0;
	int space  = 0;
	int digits = 0;
	int others = 0;
	char c;
	cout << "请输入字符" << endl;
	while ((c = cin.get()) != '\n')
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			letters++;
		}
		else if (c == ' ')
		{
			space++;
		}
		else if (c >= '0' && c <= '9')
		{
			digits++;
		}
		else
		{
			others++;
		}
	}	
		cout << "英文字母个数" << letters<<endl;
		cout << "空格个数" << space<<endl;
		cout << "数字个数" << digits<<endl;
		cout << "其他字符个数" <<others<<endl;
		return 0;
}