#include <stdio.h>
#include <string.h>
int longestSubstring(char str[])
{
    int freq[256] = {0};
    int start = 0, maxLen = 0;
    int len = strlen(str);
    for(int end = 0; end < len; end++)
    {
        freq[str[end]]++;

        while(freq[str[end]] > 1)
        {
            freq[str[start]]--;
            start++;
        }
        int currLen = end - start + 1;
        if(currLen > maxLen)
            maxLen = currLen;
    }
    return maxLen;
}
int main()
{
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    printf("Length of longest substring: %d", longestSubstring(str));
    return 0;
}