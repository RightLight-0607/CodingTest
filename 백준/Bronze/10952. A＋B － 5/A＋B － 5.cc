#include <stdio.h>

int main()
{
    int num1, num2;
    while (true)
    {
        scanf("%d %d", &num1, &num2);
        if (num1 == 0 && num2 == 0)
            break;
        printf("%d\n", num1 + num2);
    }
    return 0;
}