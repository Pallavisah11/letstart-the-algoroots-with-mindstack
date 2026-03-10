#include <stdio.h>
int countPairs(int arr[], int n, int target)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter target value: ");
    scanf("%d", &target);
    int result = countPairs(arr, n, target);
    printf("Number of pairs = %d\n", result);
    return 0;
}