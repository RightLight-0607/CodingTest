#include <stdio.h>
#include <algorithm>

using namespace std;

int Serch(int arr[], int l, int r, int target)
{
	if (l <= r)
	{
		int m = (l + r) / 2;
		if (arr[m] == target)
			return 1;
		if (arr[m] > target)
			return Serch(arr, l, m - 1, target);
		else if (arr[m] < target)
			return Serch(arr, m + 1, r, target);
	}
	return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	sort(arr, arr + n);

	int m;
	scanf("%d", &m);
	int* arr2 = new int[m];

	for (int i = 0; i < m; i++)
		scanf("%d", &arr2[i]);

	for (int i = 0; i < m; i++)
		printf("%d\n", Serch(arr, 0, n - 1, arr2[i]));
}