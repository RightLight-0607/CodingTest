#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	
	string str;
	bool cheak = true;
	int N;
	int n1, n2;
	int result = 0;

	cin >> N;
	for (int k = 0; k < N; k++)
	{
		cin >> str;
		cheak = true;
		for (int i = 0; i < str.length(); i++)
		{
			n1 = i;
			for (int j = i + 1; j < str.length(); j++)
			{
				if (str[i] == str[j])
				{
					n2 = j;
					if (n1 + 1 != n2)
					{
						cheak = false;
						break;
					}
					n1 = n2;
				}
			}
		}
		if (cheak)
			result++;
	}

	cout << result;
}