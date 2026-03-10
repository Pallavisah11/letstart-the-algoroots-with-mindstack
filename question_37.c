#include <stdio.h>
#include <string.h>
int isRotation(char s[], char goal[])
{
    if(strlen(s) != strlen(goal))
        return 0;
    char temp[200];
    strcpy(temp, s);
    strcat(temp, s);
    if(strstr(temp, goal) != NULL)
        return 1;
    return 0;
}
int main()
{
    char s[100], goal[100];
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter goal string: ");
    scanf("%s", goal);
    if(isRotation(s, goal))
        printf("true");
    else
        printf("false");
    return 0;
}