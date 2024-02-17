#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int c = b / 100;
    int d = b % 100 / 10;
    int e = b % 100 % 10;
    printf("%d\n%d\n%d\n%d", a*e, a*d, a*c, a*b);
    return 0;
}