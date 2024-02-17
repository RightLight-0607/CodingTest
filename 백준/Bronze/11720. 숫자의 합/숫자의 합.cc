#include <stdio.h>

int main()
{
    int count;
    scanf("%d", &count);

    char* arr = new char[count];
    scanf("%s", arr);
    int sum = 0;

    for (int i = 0; i < count; i++)
    {
        sum += arr[i] % 48;
    }

    printf("%d", sum);

    return 0;
}