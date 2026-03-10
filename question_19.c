#include <stdio.h>
int main() {
    int m, n;
    printf("Enter m (elements in nums1): ");
    scanf("%d", &m);
    printf("Enter n (elements in nums2): ");
    scanf("%d", &n);
    int nums1[m+n], nums2[n];
    printf("Enter elements of nums1:\n");
    for(int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }
    printf("Enter elements of nums2:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    while(i >= 0 && j >= 0) {
        if(nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
    while(j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
    printf("Merged array:\n");
    for(int x = 0; x < m+n; x++) {
        printf("%d ", nums1[x]);
    }
    return 0;
}