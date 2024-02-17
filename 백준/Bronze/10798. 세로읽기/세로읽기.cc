#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	char word[5][15] = { NULL, };
	string input;

	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		for (int j = 0; j < input.length(); j++)
		{
			word[i][j] = input[j];
		}
	}

	for (int j = 0; j < 15; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (word[i][j] != NULL)
			{
				cout << word[i][j];
			}
		}
	}
}
