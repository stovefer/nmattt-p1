#include <iostream>
using namespace std;

int main (void)
{
	string s;
	int lap [26] = {};
	cout <<"Nhap chuoi: "; getline (cin, s);
	int total = s.size();
	float tinh [26] = {};
	for (int i = 0; i < s.size(); i++)
	{
		int a = s[i] - 'A';
		lap [a] ++;
	}
	for (int i = 0 ; i < 26; i++)
	{
		tinh[i] = (float) lap[i] / total;
		cout<<char('A' + i)<<" "<<lap[i]<<" "<<tinh[i]<<endl;	
	}	
}
