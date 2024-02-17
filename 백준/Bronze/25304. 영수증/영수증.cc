#include <stdio.h>

int main()
{
    int total, n, price, count;
    scanf("%d", &total);
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &price, &count);
        total = total - (price*count);
    }
    
    if(total == 0)
        printf("Yes");
    else
        printf("No");
    
    return 0;
}