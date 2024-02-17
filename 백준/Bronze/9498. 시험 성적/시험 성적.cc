#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    
    int score = a/10;
    
    if(score >= 9)
        printf("A");
    else if(score >= 8)
        printf("B");
    else if(score >= 7)
        printf("C");
    else if(score >= 6)
        printf("D");
    else
        printf("F");
    return 0;
}