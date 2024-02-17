#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int* baket = new int[N];

    int i, j;

    for (int i = 0; i < N; i++)
    {
        baket[i] = i + 1;
    }

    for (int s = 0; s < M; s++)
    {
        scanf("%d %d", &i, &j);
        int temp = baket[i - 1];
        baket[i - 1] = baket[j - 1];
        baket[j - 1] = temp;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", baket[i]);
    }

    return 0;
}