#include <stdio.h>

int main()
{
    int h, m;
    scanf("%d %d", &h, &m);
    if (m - 45 < 0)
    {
        if (h - 1 < 0)
        { h = 24; }
        printf("%d %d", h - 1, m + 15);
    }
    else if (m - 45 > 0)
        printf("%d %d", h, m - 45);
    else
    {
        printf("%d %d", h , 0);
    }
    return 0;
}