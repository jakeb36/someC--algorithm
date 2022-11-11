/*
操场上有N x N个“巨人”按N行N列的矩阵形式列队，请编程找出该方阵中所有“最矮的巨人”。
所谓“最矮的巨人”是指，该巨人在其所在行中，身高最高（没人比其更高）；且在其所在列中，身高最矮（没人比其更矮）。
*/
#include <iostream>
using namespace std;
int main()
{
    int n[6][6]{};
    int i;
    int c = 0;
    bool have = false;
    cin >> i;
    for (int a = 0; a < i; a++)
        for (int b = 0; b < i; b++)
            cin >> n[a][b];
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < i; b++)//找到行最大值
        {
             if (n[a][b] >= n[a][c])//该if判断最大值位置
             {
                 c = b;
             }
        }
        for (int b = 0; b < i; b++)//输出最大值
        {
            int q = 0;
            if (n[a][b] == n[a][c])
            {
                
                for(int l=0;l<i;l++)
                { 
                    if (n[l][b] >= n[a][b])
                        q++;
                    }
                }
            if (q == i)
            {
                cout << "(" << a << "," << b << ")" << endl;
                have = true;
                q = 1;
            }
        }
        c = 0;
    }
    if (have == false)
        cout << "NONE";
}
