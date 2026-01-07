#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void  settime() {
     cin >> hour >> minute >> sec;
	}
	void showtime() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
	

};

int main()
{
	Time tl;
	tl.settime();
	tl.showtime();
	return 0;
}
