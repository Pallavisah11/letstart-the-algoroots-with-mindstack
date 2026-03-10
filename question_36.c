#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    char strs[n][100];
    printf("Enter the strings:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%s", strs[i]);
    }
    char prefix[100];
    strcpy(prefix, strs[0]);
    for(int i = 1; i < n; i++)
    {
        while(strncmp(prefix, strs[i], strlen(prefix)) != 0)
        {
            prefix[strlen(prefix) - 1] = '\0';
            if(strlen(prefix) == 0)
            {
                printf("Longest Common Prefix: \"\"");
                return 0;
            }
        }
    }
    printf("Longest Common Prefix: %s", prefix);
    return 0;
}