/*
如果一个字符串通过字符位置的调整能重组为另一个字符串，就称这两个字符串“可重组相等”。给出两个字符串，请判断它们是否“可重组相等”。
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a;
	cin >> a;
	getchar();
	for(int b=0;b<a;b++)
	{
		string fir;
		string sec;	
		getline(cin,fir);	
		int m = fir.length();
		getline(cin,sec);
        int n = sec.length();

		if (m != n)
			cout << "No" << endl;
		else
		{
			int lea = 0;
			for (int x = 0; x < m; x++)
			{
				int num1 = 0;
				int num2 = 0;
				for (int q = 0; q < m; q++)
					if (fir[x] == fir[q])
						num1++;
				for (int r = 0; r < n; r++)
					if (sec[r] == fir[x])
						num2++;
				if (num1 == num2)
					lea++;
				else
				{
					cout << "No" << endl;;
					break;
				}
			}
			if (lea == m)
			{
				if (b == a - 1)
					cout << "Yes";
				else
				{
					cout << "Yes" << endl;
				}
			}
		}
	}
}
