// 作业 1 （2）.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    double r, h, v;
    const float PI = 3.1415926f;
    cout << "请输入半径" << endl;
    cin >> r;
    cout << "请输入锥高" << endl;
    cin >> h;
    v = (1.0 / 3.0) * PI * r * r * h;
    cout <<"圆锥的体积是"<<v << endl;
    return 0;
     
}


