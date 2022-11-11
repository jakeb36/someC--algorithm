/*
有时候人们用四位数字表示一个时间，比如 1106 表示 11 点零 6 分。
现在，你的程序要根据起始时间和流逝的时间计算出终止时间。

读入两个数字，第一个数字以这样的四位数字表示当前时间，第二个数字表示分钟数，
计算当前时间经过那么多分钟后是几点，结果也表示为四位数字。
当小时为个位数时，没有前导的零，例如 5 点 30 分表示为 530；0 点 30 分表示为 030。
注意，第二个数字表示的分钟数可能超过 60，也可能是负数。


*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int b,c;
    string a;
    cin >> a >> b;
    int d = stoi(a);
    int e = b / 60;
    int f = b % 60;
    d += e * 100 + f;
    a = to_string(d);
    if (b >= 0)
    {
        if (d >= 1000)
        {
            string v = a.substr(2, 1);
            c = stoi(v);
            if (c >= 6)
                d += 40;
                cout << d;
        }
         else if(d >= 100)
        {
            string v = a.substr(1, 1);
            c = stoi(v);
           if (c >= 6)
                d += 40;
                 cout << d;
         }
         else
        {
            string v = a.substr(0, 1);
            c = stoi(v);
            if (c >= 6)
                d += 40;
                 cout <<"0"<< d;
        }

    }
    else
    {
        if (d >= 1000)
        {
            string v = a.substr(2, 1);
            c = stoi(v);
            if (c >= 6)
                d -= 40;
                cout << d;
        }
        else if(d >= 100) 
        {
            string v = a.substr(1, 1);
            c = stoi(v);
            if (c >= 6)
                d -= 40;
                cout << d;
        }
        else
        {
            string v = a.substr(0, 1);
            c = stoi(v);
            if (c >= 6)
                d -= 40;
                cout << "0" << d;
        }
    }

}
