#include <stdio.h>
#include <string.h>

int main()
{
    char* word = new char[1000001];
    scanf("%s", word);
    int chart[26] = { 0, };
    int len = strlen(word);
    for (int i = 0; i < len; i++)
    {
        if (word[i] >= 'a')
            chart[(int)((word[i] - 32) % 'A')] ++;
        else
            chart[(int)(word[i] % 'A')] ++;
    }
    int index = 0;
    for (int i = 1; i < 26; i++)
    {
        if (chart[index] < chart[i])
        {
            index = i;
        }
    }
    for (int i = 1; i < 26; i++)
    {
        if (!(i == index))
        {
            if (chart[index] == chart[i])
            {
                printf("?");
                return 0;
            }
        }
    }
    printf("%c", index + 'A');
    return 0;
}