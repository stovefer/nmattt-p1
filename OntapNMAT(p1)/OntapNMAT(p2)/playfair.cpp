#include <iostream>
using namespace std;

char table [5][5];

void taobang (string key)
{
	string s = "";
	bool lap [26] = {false};
	for (int i = 0; i < key.size(); i++)
	{
		char c = key[i];
		if (c == 'J') c = 'I';
		if (!lap[c - 'A'])
		{
			s += c;
			lap [c - 'A'] = true;
		}
	}
	for (char c = 'A'; c <= 'Z'; c++)
	{
		if (c == 'J') continue;
		if (!lap [c - 'A'])
		{
			s += c;
			lap [c - 'A'] = true;
		}
	}
	int k = 0;
	for (int a = 0; a < 5; a++)
	{
		for (int b = 0; b < 5; b++)
		{
			table [a][b] = s[k++];
		}
	}
}
void timVT (char c, int &r, int &c1)
{
	if (c == 'J') c = 'I';
	for (r = 0 ; r < 5; r++)
	{
		for (c1 = 0; c1 < 5; c1++)
		{
			if (table [r][c1] == c) return;
		}
	}
}

string matran (string s)
{
	string res = "";
	for (int i = 0; i < s.size(); i++)
	{
		char a = s[i];
		char b;
		if (i + 1 < s.size()) b = s [i + 1];
		else b = 'X';
		
		if (a == b)
		{
			b = 'X';
			i--;
		}
		
		int r1 ,c1;
		int r2 , c2;
		timVT (a,r1,c1);
		timVT (b,r2,c2);
		
		if (r1 == r2)
		{
			res += table [r1][(c1 + 1) % 5];
			res += table [r2][(c2 + 1) % 5];
		}
		else if (c1 == c2) {
            res += table[(r1 + 1) % 5][c1];
            res += table[(r2 + 1) % 5][c2];
        } else {
            res += table[r1][c2];
            res += table[r2][c1];
        }
	}
	return res;
}

int main() {
    string key, text;
    cout << "KEY (in hoa, khong co khoang cach): ";
    cin >> key;
    cout << "PLAINTEXT (in hoa, khong co khoang cach): ";
    cin >> text;
    taobang(key);
    cout << "CIPHERTEXT: " << matran(text) << endl;
    return 0;
}

