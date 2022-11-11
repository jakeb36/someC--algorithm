/*
请编写程序，输入菱形的高，输出由星号勾勒出的菱形。
*/
#include <iostream>
#include <cmath>
using namespace std;
void hua(int b);
int main()
{
    int a;
    cin >> a;
    if (a % 2 == 0)
        cout << "Error";
    else
        hua(a);
}
void hua(int b)
{
    int c = (b + 1) / 2;
    for (int i = 1; i <= b; i++)
    {
        if (i == 1 || i == b)
        {
            for (int k = 1; k < c;k++)
                cout << " ";
            cout << "*" << endl;
        }
        else 
        {
            int o = fabs(c - i);//fabs是求绝对值的
            for (int q = 0;q < o; q++)
                cout << " ";
            cout << "*";
            for (int q = 0; q < b - 2 - 2 * o ; q++)
                cout << " ";
            cout << "*" << endl;
        }
    }
}
