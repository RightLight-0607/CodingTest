#include <stdio.h>
#include <string.h>

int main()
{
    char arr[1000001];
    scanf("%[^\n]s", &arr);
    int count = 0;
    for(int i = 0; i < strlen(arr); i++)
    {
        if(arr[i] == ' ')
            count++;
    }
    if(arr[0] == ' ') 
        count--;
    if(arr[strlen(arr)-1] == ' ')
        count--;
    printf("%d", count + 1);
    return 0;
}