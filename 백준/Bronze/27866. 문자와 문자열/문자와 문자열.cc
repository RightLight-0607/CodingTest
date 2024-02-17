#include <stdio.h>

int main()
{
    char word[1000];
    int num;
    char answer;
    scanf("%s", word);
    scanf("%d", &num);
    for(int i = 0; i < num; i++)
    {
        answer = word[i];
    }
    printf("%c", answer);
    
    return 0;
}