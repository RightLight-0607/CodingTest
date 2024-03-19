#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	string s;
	int a = 0, b = 0;
	for (int i = 0; i < t; i++)
	{
		cin >> s;
		a = 0;
		b = 0;
        
		for (int k = s.length() - 1; k >= 0; k--)
		{
			if (s[k] == ')')
				a++;
			else
				b++;

			if (b > a)
			{
				cout << "NO" << "\n";
				break;
			}

			if (k == 0)
			{
				if (a == b)
					cout << "YES" << "\n";
				else
					cout << "NO" << "\n";
			}

		}

	}
}