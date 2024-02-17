#include <stdio.h>

int main()
{
    int count, num1, num2;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d %d", &num1, &num2);
        printf("Case #%d: %d + %d = %d \n", i + 1, num1, num2, num1 + num2);
    }
    return 0;
}