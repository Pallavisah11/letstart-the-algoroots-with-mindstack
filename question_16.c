#include <stdio.h>
#include <limits.h>
int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);
    int max, pos;
    for(int i = 0; i < k; i++) {
        max = INT_MIN;
        for(int j = 0; j < n; j++) {
            if(arr[j] > max) {
                max = arr[j];
                pos = j;
            }
        }
        arr[pos] = INT_MIN; // mark used
    }
    printf("Kth largest element = %d", max);
    return 0;
}