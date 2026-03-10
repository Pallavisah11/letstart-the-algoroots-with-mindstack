#include <stdio.h>
#include <string.h>
void moveHash(char str[])
{
    int hashCount = 0;
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        if(str[i] == '#')
            hashCount++;
    }
    for(int i = 0; i < hashCount; i++)
    {
        printf("#");
    }
    for(int i = 0; i < len; i++)
    {
        if(str[i] != '#')
            printf("%c", str[i]);
    }
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%s", str);
    printf("Output:\n");
    moveHash(str);
    return 0;
}