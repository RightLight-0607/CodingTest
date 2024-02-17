#include <stdio.h>
#include <string.h>

int main()
{
    int count;
    scanf("%d", &count);
    char word[1000];
    for(int i = 0; i< count; i++)
    {
        scanf("%s", word);
        printf("%c%c\n", word[0], word[strlen(word) - 1]);
    }
    
    return 0;
}