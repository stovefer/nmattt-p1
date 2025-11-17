#include <iostream>
using namespace std;

char bang [5][5];

void taobang (string s)
{
	int k = 0;
	for (int a = 0; a < 5; a++)
	{
		for (int b = 0; b < 5 ;b++)
		{
			bang[a][b] = s[k++];
		}
	}
}

int main(void)
{
	string p,c;
	cout <<"Nhap chuoi plaintext: ";getline (cin, p);
	c = "";
	taobang (p);
	for (int a = 0; a < 5; a ++)
	{
		for (int b = 0; b < 5; b++)
		{
			c += bang [b][a];
		}
	}
	cout <<"Newtext: "<<c<<endl;
	p = "";
	taobang (c);
	for (int d = 0; d < 5; d ++)
	{
		for (int e = 0; e < 5; e++)
		{
			p += bang [e][d];
		}
	}
	cout<<p<<endl;
}
