#include <iostream>

using namespace std;

int main()
{
	int arr[10001] = { 0, };
	int n, k;
	cin >> n >> k;
	int i = 1;
	int j = 0;
	while (n >= i)
	{
		if (n % i == 0)
		{
			arr[j] = i;
			j++;
		}
		i++;
	}

	cout << arr[k - 1];
}