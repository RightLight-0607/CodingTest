#include <stdio.h>

int main()
{
    int count, find;
    int sum = 0;
    int a[100];
    
    scanf("%d", &count);
    for(int i = 0; i < count; i++)
    {
        scanf("%d ", &a[i]);
    }
    scanf("%d", &find);
    
    for(int i = 0; i < count; i++)
    {
        if(a[i] == find)
        {
            sum++;
        }
    }
    printf("%d", sum);
    
    return 0;
}