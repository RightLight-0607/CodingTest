#include <stdio.h>

int main()
{
    int anser[49];
    int count = 0;
    int num;
    for(int i = 0; i< 42; i++)
    {
        anser[i] = 0;
    }
    for(int i = 0; i< 10; i++)
    {
        scanf("%d", &num);
        anser[num % 42]++;
    }
    for(int i = 0; i< 42; i++)
    {
        if(anser[i] >= 1)
            count++;
    }
    printf("%d", count);
    return 0;
}