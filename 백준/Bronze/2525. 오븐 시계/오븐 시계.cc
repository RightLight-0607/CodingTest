#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d\n %d", &a, &b, &c);

    if (b + c == 60)
        if (a + 1 == 24)
        {
            printf("%d %d", 0, 0);
        }
        else if (a + 1 > 24)
        {
            printf("%d %d", 1, 0);
        }
        else
        {
            printf("%d %d", a + 1, 0);
        }
    else if (b + c > 60)
    {

        int d = (b + c) / 60;
        if (a + d == 24)
        {
            printf("%d %d", 0, ((b + c) - 60) % 60);
        }
        else if (a + d > 24)
        {
            printf("%d %d", (a + d) - 24, ((b + c) - 60) % 60);
        }
        else
        {
            printf("%d %d", a + d, ((b + c) - 60) % 60);
        }
    }

    else
    {
        printf("%d %d", a, b + c);
    }


    return 0;
}