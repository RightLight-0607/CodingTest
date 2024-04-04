#include <stdio.h>

int main()
{
	int n, k, index = 0;
	int arr[1000000] = { 0, };
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k);

		switch (k)
		{
		case 1:
			scanf("%d", &arr[index++]);
			break;
		case 2:
			if (index == 0)
				printf("-1\n");
			else
				printf("%d\n", arr[--index]);
			break;
		case 3:
			printf("%d\n", index);
			break;
		case 4:
			if (index == 0)
				printf("1\n");
			else
				printf("0\n");
			break;
		case 5:
			if (index == 0)
				printf("-1\n");
			else
				printf("%d\n", arr[index - 1]);
			break;
		default:
			break;
		}
	}
}