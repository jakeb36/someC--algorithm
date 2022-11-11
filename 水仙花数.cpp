/*
输入两个3位的正整数m，n，输出[m，n]区间内所有的“水仙花数”。所谓“水仙花数”是指一个3位数，其各位数字的立方和等于该数本身。
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int num1, num2;
    string a, b, c;
    int z = 0;
    while (z<3)
     {
        cin >> num1 >> num2;
        int h,i;
        i = 0;
        int e, f, g;
        for (num1; num1 <= num2; num1++)
        {
            string d = to_string(num1);
            a = d.substr(0, 1);
            b = d.substr(1, 1);
            c = d.substr(2, 1);

            e = stoi(a);
            f = stoi(b);
            g = stoi(c);
            h = pow(e, 3) + pow(f, 3) + pow(g, 3);
            if (h == num1)
            {
                cout << num1 << "=" << e << "*" << e << "*" << e
                    << "+" << f << "*" << f << "*" << f << "+" << g << "*" << g
                    << "*" << g << endl;
                i = 1;
            }           
        }
            if(i==0)
                cout << "none"<<endl;
            z++;
    }
}
