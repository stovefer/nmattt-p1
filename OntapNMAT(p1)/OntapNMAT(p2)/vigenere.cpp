#include <iostream>
using namespace std;

int main (void)
{
	string P,K,C;
	cout<<"Chuoi plaintext: "; getline(cin,P);
	cout<<"Khoa K: "; getline (cin,K);
	
	C = "";
	int j = 0;
	for (int i = 0;i < P.size(); i++)
	{
		C += 'A'+ ((P[i] - 'A') + (K[j % K.size()] - 'A')) % 26;
		j++;
		//if (j == K.size()) j = 0;
	}
	cout<<"Chuoi ma hoa: "<<C;
	cout<<endl;
	P = "";
	int b = 0;
	for (int a = 0; a < C.size(); a++)
	{
		P += 'A' + ((C[a] - 'A') - (K[b % K.size()] - 'A') + 26) % 26;
		b++;
		//if (b == K.size()) b = 0;
	}
	cout<<"Chuoi giai ma: "<<P;
}
