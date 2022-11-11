/*
传说魔镜可以把任何接触镜面的东西变成原来的两倍，不过增加的那部分是反的。
例如，对于字符串XY，若把Y端接触镜面，则魔镜会把这个字符串变为XYYX；
若再用X端接触镜面，则会变成XYYXXYYX。
对于一个最终得到的字符串（可能未接触魔镜），请输出没使用魔镜之前，该字符串最初可能的最小长度。
*/
#include <iostream>
#include <cstring>
using namespace std;
int moj(string a)
{
    int len = a.length();
    if (len % 2 != 0||len==1)
        return len;
    else
        for (int i = 0; i < len / 2; i++)
            if (a[i] == a[len - 1 - i])
                continue;
            else
                return len;
    a.erase(len / 2, len);
    return moj(a);
}
int main()
{
    string a;  
    while (cin >> a)
        cout << moj(a) <<endl;
    return 0;
}
