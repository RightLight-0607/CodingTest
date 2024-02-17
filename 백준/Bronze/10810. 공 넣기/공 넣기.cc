#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int baket[100];

    int i, j, k;

    for (int i = 0; i < 100; i++)
    {
        baket[i] = 0;
    }

    for (int s = 0; s < M; s++)
    {
        scanf("%d %d %d", &i, &k, &j);
        for (int c = i - 1; c < k; c++)
        {
            baket[c] = j;
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", baket[i]);
    }

    return 0;
}