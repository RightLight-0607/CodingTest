#include <stdio.h>

int Fibo(int num)
{
	if (num <= 1)
		return num;
	return Fibo(num - 1) + Fibo(num - 2);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", Fibo(n));
}
