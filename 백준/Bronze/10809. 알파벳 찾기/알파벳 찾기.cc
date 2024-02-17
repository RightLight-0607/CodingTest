#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    scanf("%s", arr);
    int numArr[26];
    for (int i = 0; i < sizeof(numArr) / 4; i++)
        numArr[i] = -1;

    for (int i = 0; i < strlen(arr); i++)
    {
        if(numArr[arr[i] % 97] == -1)
            numArr[arr[i] % 97] = i;
    }
    
    for (int i = 0; i < sizeof(numArr) / 4; i++)
        printf("%d ", numArr[i]);

    return 0;
}