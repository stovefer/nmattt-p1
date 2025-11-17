#include <iostream>
#include <string>
using namespace std;

int main (void)
{
	string p,c,k;
	cout <<"Nhap chuoi plaintext: "; getline (cin,p);
	cout <<"Nhap chuoi key: "; getline (cin,k);
	int j = 0;
	c = "";
	for (int i = 0; i < p.size(); i++)
	{
		 c += p[i] ^ k[j % k.size()];
		 j++;
	}
	cout<<"Chuoi ma hoa: "<<c<<endl;
	int g = 0;
	p = "";
	for (int i = 0; i < c.size(); i++)
	{
		p += c[i] ^ k[g % k.size()];
		g++;
	}
	cout<<"Chuoi giai ma: "<<p<<endl;
}
