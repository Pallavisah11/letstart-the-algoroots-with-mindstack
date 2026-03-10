#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int smallest = INT_MAX, secondSmallest = INT_MAX;
    int largest = INT_MIN, secondLargest = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    if(secondSmallest == INT_MAX)
        secondSmallest = -1;
    if(secondLargest == INT_MIN)
        secondLargest = -1;
    printf("Second Smallest : %d\n", secondSmallest);
    printf("Second Largest : %d\n", secondLargest);
    return 0;
}