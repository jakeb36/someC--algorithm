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
