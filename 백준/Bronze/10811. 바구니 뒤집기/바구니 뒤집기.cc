#include <stdio.h>

int main()
{
    int baket, count;
    scanf("%d %d", &baket, &count);

    int* arr = new int[baket];

    for (int i = 0; i < baket; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < count; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        for (int j = 0; j < (b - a + 1)/2; j++)
        {
            int temp = arr[a - 1 + j];
            arr[a - 1 + j] = arr[b - 1 - j];
            arr[b - 1 - j] = temp;
        }
    }
    for (int i = 0; i < baket; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}