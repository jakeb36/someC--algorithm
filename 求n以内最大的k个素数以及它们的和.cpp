//  10<=n<=10000   1<=k<=10
#include <iostream>
using namespace std;
bool sushu(int a);
int main()
{
    int a, b;
    int d[10];
    cin >> a >> b;
    int add = 0,df = 0;
    for (int i = a; i > 1; i--)
    {
        
        bool su = sushu(i);
        if (su == true)//是素数
        {
            add += i;
            d[df] = i;
            df++;
        }
        if (df == b)
            break;
    }
    for(int i = 0; i < df - 1; i++)
    {
        cout << d[i] << "+";
    }
    cout << d[df-1] << "=" << add;
}
bool sushu(int a)
{
    for (int i = 2; i <= a - 1; i++)
    {
        if (a % i != 0)
            continue;
        else
            return false;
    }
    return true;
}
