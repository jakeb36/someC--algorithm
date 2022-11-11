/*
给定一个长度不超过10000的、仅由英文字母构成的字符串。
请将字符重新调整顺序，按GPLTGPLT....这样的顺序输出，并忽略其它字符。
当然，四种字符（不区分大小写）的个数不一定是一样多的，
若某种字符已经输出完，则余下的字符仍按GPLT的顺序打印，直到所有字符都被输出。
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string a;
	cin >> a;
	int g = 0, p = 0, l = 0, t = 0;
	int m;
	int length = a.length();
	for(int i = 0; i < length ; i++)
	{
		
		a[i] = toupper(a[i]);//将所有字母转为大写
		if (a[i] == 'G')
			g++;
		else if (a[i] == 'P')
			p++;
		else if (a[i] == 'L')
			l++;
		else if (a[i] == 'T')
			t++;
	    m = max({ g,p,l,t });	
	}
	for (int k a= 0; k < m; k++)
		{
			if (g != 0)
			{
				cout << "G";
				g--;
			}
			if (p != 0)
			{
				cout << "P";
				p--;
			}
			if (l != 0)
			{
				cout << "L";
				l--;
			}
			if (t != 0)
			{
				cout << "T";
				t--;
			}
		}

}
