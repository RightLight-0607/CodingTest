#include <stdio.h>

int main()
{
    char word[100];
    int count = 0;
    scanf("%s", word);
    for(int i = 0; i < 100; i++)
    {
        if(word[i] == '\0')
        {
            break;
        }
        count ++;
    }
    printf("%d", count);
    
    return 0;
}