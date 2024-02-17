#include <stdio.h>
#include <string.h>

int main()
{
    char* word = new char[101];
    scanf("%s", word);

    int len = strlen(word);
    int count = 0;
    int b;
    for (int i = 0; i < len; i++)
    {
        if (word[i] == 'd')
        {

            if (word[i + 1] == 'z' && word[i + 2] == '=')
            {
                i += 2;
            }
            else if (word[i + 1] == '-')
                i += 1;
        }
        else if (word[i] == 'c' && (word[i + 1] == '=' || word[i + 1] == '-'))
            i += 1;

        else if (word[i] == 'l' && word[i + 1] == 'j')
            i += 1;

        else if (word[i] == 'n' && word[i + 1] == 'j')
            i += 1;

        else if (word[i] == 's' && word[i + 1] == '=')
            i += 1;

        else if (word[i] == 'z' && word[i + 1] == '=')
            i += 1;

        count++;
    }
    printf("%d", count);
    return 0;
}