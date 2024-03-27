#include <stdio.h>

long long int Factorial(int num)
{
	if (num < 2)
		return 1;

		return num * Factorial(num - 1);
}

int main()
{
	int n;
	scanf("%d", &n);

	printf("%lld", Factorial(n));
}
