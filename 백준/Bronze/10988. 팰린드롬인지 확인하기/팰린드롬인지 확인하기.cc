#include <stdio.h>
#include <string.h>

int main()
{
    char* word = new char[100];
    scanf("%s", word);
    
    bool same = true;
    
    for(int i = 0; i < strlen(word) / 2; i ++)
    {
        if(word[i] != word[(strlen(word) - 1) - i])
        {
            same = false;
            break;
        }
    }
    
        printf("%d", same);
    
    return 0;
}