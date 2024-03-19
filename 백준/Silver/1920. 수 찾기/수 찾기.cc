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

	int count, num, out;
	int l, r, m;
	
	scanf("%d", &count);
	for (int j = 0; j < count; j++)
	{
		scanf("%d", &num);
		out = 0;
		l = 0;
		r = n - 1;
		while (l <= r)
		{
			m = (l + r) / 2;
			if (num < arr[m])
				r = m - 1;

			else if (num > arr[m])
				l = m + 1;

			else if (num == arr[m])
			{
				out = 1;
				break;
			}
		}
		printf("%d\n", out);
	}
}