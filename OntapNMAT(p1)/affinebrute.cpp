#include <iostream>
using namespace std;

int main (void)
{
	string s,P;
	int a,b,a1;
	cout<<"Nhap cyphertext: "; cin>>s;
	for (int a = 1; a < 26; a+=2)
	{
		if (a!=13)
		{
			for (int b = 0; b < 26; b++)
			{
				for (int i = 1; i < 26; i +=2)
				{
					if (a*i % 26 == 1)
					{
						a1 = i;
						break;
					}
				}
				P = "";
				for (int j = 0; j < s.size(); j++)
				{
					P += 'A' + (a1 * ((s[j] - 'A') - b + 26)) % 26;//LUU Y: PHAN NAY KO DUNG S[J] do no thay doi sau tung vong lap =>sai
				}
				cout<<a<<","<<b<<": "<<P<<endl;
			}
		}
	}
}
