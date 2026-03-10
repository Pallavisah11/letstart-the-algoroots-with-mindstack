#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int duplicate = -1;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                duplicate = arr[i];
                break;
            }
        }
        if(duplicate != -1)
            break;
    }
    printf("Duplicate number = %d", duplicate);
    return 0;
}