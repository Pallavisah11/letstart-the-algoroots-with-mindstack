#include <stdio.h>
#include <string.h>
void longestPalindrome(char str[])
{
    int start = 0;
    int maxLen = 1;
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        int left = i, right = i;
        while(left >= 0 && right < len && str[left] == str[right])
        {
            if(right - left + 1 > maxLen)
            {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
        left = i;
        right = i + 1;
        while(left >= 0 && right < len && str[left] == str[right])
        {
            if(right - left + 1 > maxLen)
            {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }
    printf("Longest Palindromic Substring: ");
    for(int i = start; i < start + maxLen; i++)
        printf("%c", str[i]);
}
int main()
{
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    longestPalindrome(str);
    return 0;
}