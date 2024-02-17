#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int big = a;
    if (a == b && a == c)
        printf("%d", 10000 + a * 1000);
    else
    {
        if (a == b || a == c)
            printf("%d", 1000 + a * 100);
        else if (b == c)
            printf("%d", 1000 + b * 100);
        else
        {
            if (a < b && c < b)
                big = b;
            else if(a < c)
                big = c;
            printf("%d", big * 100);
        }
    }

    return 0;
}