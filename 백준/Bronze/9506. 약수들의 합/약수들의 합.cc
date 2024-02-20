#include <iostream>

using namespace std;

int main()
{
	int n, j ,i, sum;
	while (true)
	{
		cin >> n;
		if (n == -1)
			break;
		int arr[10001] = { 0, };
		i = 1;
		j = 0;
		sum = 0;
		while (n > i)
		{
			if (n % i == 0)
			{
				arr[j] = i;
				j++;
			}
			i++;
		}
		j = 0;
		while (arr[j] != 0)
		{
			sum += arr[j];
			j++;
		}

		if (sum == n)
		{
			int k = 0;
			cout << n << " = ";
			while (arr[k] != 0)
			{
				cout << arr[k];
				k++;
				while (arr[k] != 0)
				{
					cout << " + ";
					break;
				}
			}
			cout << "\n";
		}
		else
			cout << n << " is NOT perfect." << "\n";
	}
}