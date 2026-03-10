#include <stdio.h>
int majorityElement(int arr[], int n)
{
    int candidate = 0;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(count == 0)
        {
            candidate = arr[i];
        }

        if(arr[i] == candidate)
            count++;
        else
            count--;
    }
    return candidate;
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
    int result = majorityElement(arr, n);
    printf("Majority Element = %d\n", result);
    return 0;
}