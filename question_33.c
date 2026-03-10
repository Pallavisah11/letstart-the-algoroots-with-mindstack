#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int freq[26] = {0};
    printf("Enter the string: ");
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        freq[str[i] - 'a']++;
    }
    for(int i = 0; i < len; i++)
    {
        if(freq[str[i] - 'a'] == 1)
        {
            printf("First non-repeated character: %c", str[i]);
            return 0;
        }
    }
    printf("No unique character found");
    return 0;
}