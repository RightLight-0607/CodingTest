#include <stdio.h>

int main()
{
    bool numArr[30];
    int num;

    for (int i = 0; i < 30; i++)
    {
        numArr[i] = false;
    }
    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &num);
        numArr[num - 1] = true;
    }
    for (int i = 0; i < 30; i++)
    {
        if (numArr[i] != true)
            printf("%d\n", i + 1);
    }
    return 0;
}