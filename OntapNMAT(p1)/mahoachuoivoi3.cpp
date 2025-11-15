#include <iostream>
#include <string>
using namespace std;

int main (void)
{
	string a;
	cout<<"Nhap a: ";
	getline (cin,a);
	for (int i = 0; i < a.size(); i++)
	{
		a[i] += 3;
	}
	cout<< "Chuoi ma hoa: " <<a<<endl;
	string g = a;
	for (int j = 0; j < a.size(); j++)
	{
		g[j] -= 3;
	}
	cout<<"Chuoi giai ma: " <<g;
}
