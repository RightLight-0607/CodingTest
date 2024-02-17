#include <stdio.h>

int main()
{
    char* num1 = new char[4];
    char* num2 = new char[4];

    scanf("%s %s", num1, num2);
    int a = 0;
    int b = 0;
    for (int i = 2; i >= 0; i--)
    {
        a = a * 10 + num1[i] % '0';
        b = b * 10 + num2[i] % '0';
    }
    if (a < b)
        printf("%d", b);
    else
        printf("%d", a);

    return 0;
}