#include <iostream>
using namespace std;

int xacdinh (int q) 
{
	for (int i = 0; i < 26 ;i ++)
	{
		if (q * i % 26 == 1)
		return i;
	}
}

int main (void)
{
	int a,b,a1;
	string s,C,P;
	cout<<"Dien plaintext: "; getline (cin,s);
	do{
	cout<<"Nhap a: "; cin>>a;
	} while (a % 2 == 0 || a == 13);
	do{
	cout<<"Nhap b: "; cin>>b;
	} while (b < 0 || b > 25);
	a1 = xacdinh(a);
	for (int i = 0; i < s.size(); i++)
	{
		s[i] = 'A' + (a * (s[i] - 'A') + b) % 26;
		C = C + s[i];
	}
	cout<<"Chuoi ma hoa: "<<C<<endl;
	for (int j = 0; j < C.size(); j++)
	{
		C[j] = 'A' + (a1 * ((C[j] - 'A') - b + 26)) %26;
		P = P + C[j];
	}
	cout<<"Chuoi giai ma: "<<P;
}
