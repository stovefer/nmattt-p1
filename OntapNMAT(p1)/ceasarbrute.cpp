#include <iostream>
using namespace std;

int KT_S (char c)
{
	return c - 'A';
}
char S_KT (int d)
{
	return 'A' + d;
}
int main (void)
{
	string a;
	int n;
	cout<<"Nhap chuoi a: ";
	getline (cin, a);
	cout<<"Nhap so lan bruteforce: ";
	cin>>n;
	for (int j = 1; j <= n; j++)
	{
		string g = a;
		for (int i = 0; i < g.size(); i++)
		{
			int b = (KT_S (g[i]) - j + 26) % 26;
			g[i] = S_KT(b);
		}
		cout <<"Chuoi bruteforce la: "<<g<<"/"<<j<<endl;
	}
}
