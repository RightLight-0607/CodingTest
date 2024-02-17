#include <iostream>

using namespace std;

int main(void)
{
	int arr[9][9];
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j] && " ";
		}
	}
	int big = arr[0][0];
	int n, m = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (big <= arr[i][j])
			{
				big = arr[i][j];
				n = i + 1;
				m = j + 1;
			}
		}
	}
	cout << big << "\n";
	cout << n  << " " << m;
}