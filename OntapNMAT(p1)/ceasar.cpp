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
	string a; int k;
	cout<<"Nhap chuoi a: ";
	getline (cin, a);
	cout<<"Nhap k: ";
	cin >> k;
	for (int i = 0; i < a.size(); i++)
	{
		int b = (KT_S (a[i]) + k) % 26;
		a[i] = S_KT(b);
	}
	cout <<"Chuoi ma hoa: "<<a<<endl;
	string g = a;
	for (int j = 0; j < a.size(); j++)
	{
		int e = (KT_S (g[j]) - k + 26) % 26;
		g[j] = S_KT(e);
	}
	cout <<"Chuoi giai ma: "<<g<<endl;
}
