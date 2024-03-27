#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	sort(arr, arr + n);

	int m, num;

	scanf("%d", &m);
	for (int j = 0; j < m; j++)
	{
		scanf("%d", &num);
		printf("%d ", upper_bound(arr, arr + n, num) - lower_bound(arr, arr + n, num));
	}
}