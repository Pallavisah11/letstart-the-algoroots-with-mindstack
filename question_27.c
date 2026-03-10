#include <stdio.h>
int main()
{
    int month;
    printf("Enter month: ");
    scanf("%d", &month);
    if(month < 1 || month > 12)
    {
        printf("Invalid Month Entered");
    }
    else
    {
        switch(month)
        {
            case 3:
            case 4:
            case 5:
                printf("Season: Spring");
                break;
            case 6:
            case 7:
            case 8:
                printf("Season: Summer");
                break;
            case 9:
            case 10:
            case 11:
                printf("Season: Autumn");
                break;
            case 12:
            case 1:
            case 2:
                printf("Season: Winter");
                break;
        }
    }
    return 0;
}