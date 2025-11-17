#include <iostream>
using namespace std;

int main(void)
{
	string s, h1, h2, C;
	cout <<"nhap chuoi plaintext: "; getline (cin,s);
	
	for (int i = 0; i < s.size(); i++)
	{
		if (i % 2 == 0)
		{
			h1 += s[i];
		}
		else h2 += s[i];
	}
	C = h1 + h2;
	cout<<"C: "<<C<<endl;
	
	int h1size;
	string P = "";
	if (C.size() % 2 == 0) h1size = C.size()/2;
	else h1size = C.size()/2 + 1;
	
	for (int i = 0 ;i < h1size; i++)
	{
		P = P + C[i];
		if (i + h1size < C.size()) P = P + C[i + h1size];
	}
	cout <<"P: "<<P;
}
