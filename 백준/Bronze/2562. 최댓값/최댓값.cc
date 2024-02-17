#include <stdio.h>

int main()
{
    int nums[9];
    int count, big;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &nums[i]);

    }
    big = nums[0];
    count = 1;
    for (int i = 1; i < 9; i++)
    {
        if (big < nums[i])
        {
            big = nums[i];
            count = i + 1;
        }
    }
    printf("%d\n%d", big, count);

    return 0;
}