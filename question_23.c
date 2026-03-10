#include <stdio.h>
void moveZeros(int arr[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[count] = arr[i];
            count++;
        }
    }
    while(count < n)
    {
        arr[count] = 0;
        count++;
    }
}
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    moveZeros(arr, n);
    printf("Array after moving zeros:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}