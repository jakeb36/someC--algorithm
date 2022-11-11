//题目给定两个正整数，请给出它们的GCD（最大公约数）和LCM（最小公倍数）
#include <iostream>
#include <algorithm>
using namespace std;
int asd(int a, int b)
{
    int q = max(a,b);
    int s = min(a,b);
    do
    {    
        int i = q%s;
        if(i == 0)
            break;
        else{
            q = s;
            s = i;
            }
    }
    while(true);
    return s;
}
int main()
{
    int a ,b ;
    cin >> a >> b;
    int en = asd(a ,b );
    cout << en << endl << a/en*b ;
    
}
