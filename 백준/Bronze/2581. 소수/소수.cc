#include <iostream>

using namespace std;

int main()
{
	int m, n;
	cin >> m;
	cin >> n;

	int x = m;
	int i = 1, j = 0;
	int arr[10001] = { 0, };
	int factor = 0;

	while (x <= n)
	{
		factor = 0;
		i = 1;
		while (x > i)
		{
			if (x % i == 0)
				factor++;

			if (factor > 2)
				break;

			i++;
		}
		if (factor < 2 && x != 1)
		{
			arr[j] = x;
			j++;
		}
		x++;
	}

	j = 0;
	int sum = 0;
	if (arr[0] == 0)
	{
		cout << -1;
		return 0;
	}
	while (arr[j] != 0)
	{
		sum += arr[j];
		j++;
	}
	cout << sum << "\n" << arr[0];
}