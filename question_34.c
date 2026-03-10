#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    int start = 0;
    printf("Enter the string: ");
    scanf("%s", str);
    int end = strlen(str) - 1;
    int flag = 1;
    while(start < end)
    {
        if(tolower(str[start]) != tolower(str[end]))
        {
            flag = 0;
            break;
        }
        start++;
        end--;
    }
    if(flag)
        printf("true");
    else
        printf("false");
    return 0;
}