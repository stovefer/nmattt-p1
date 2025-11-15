#include <iostream>
using namespace std;

bool lap (string f)
{
	for (int i = 0; i < f.size(); i++)
	{
		for (int j = 0; j < f.size(); j++)
		{
			if (i == j) continue;
			if (f[i] == f[j]) return 1;
		}
	}
}

int main (void)
{
	string s,k,C;
	cout<<"Nhap string: "; getline (cin,s);
	do{
		cout<<"Nhap khoa k: ";
		getline (cin, k);
	}while (k.size() != 26 || lap(k) == 1);
	for (int i = 0; i < s.size(); i++)
	{
		int t = s[i] - 'A';
		C += k[t];
	}
	cout <<"C = "<<C;
}
