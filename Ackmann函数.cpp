/*
阿克曼(Ackmann)函数A(m，n)中，m，n定义域是非负整数(m≤3,n≤10)，函数值定义为：

akm(m,n)= 
 
n+1(m=0时)
akm(m−1,1)(m>0,n=0时)
akm(m−1,akm(m,n−1))(m,n>0时)

*/

#include <iostream>
using namespace std;
int akm(int m, int n)
{
    int a = m;
    int b = n;
    if (a == 0)
        return b + 1;
    if (a > 0 && b == 0)
        return akm(a-1, 1);
    if (a > 0 && b > 0)
        return akm(a-1,akm(a,b-1));
}
int main()
{
    int m, n;
    cin >> m >> n; 
    cout << akm(m, n);
}
