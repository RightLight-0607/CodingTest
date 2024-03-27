#include <stdio.h>
#include <string.h>

using namespace std;

int count;
int recursion(const char* s, int l, int r) {
    count++;
    if (l >= r) 
        return 1;
    else if (s[l] != s[r]) 
        return 0;
    else 
        return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    
    char s[1000];

    for (int i = 0; i < n; i++)
    {
        count = 0;
        scanf("%s", &s);
        printf("%d ",isPalindrome(s));
        printf("%d\n",count);
    }
}