#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of matrix (n x n): ");
    scanf("%d", &n);
    int a[n][n], i, j, temp;
    printf("Enter the matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    for(j = 0; j < n; j++) {
        for(i = 0; i < n/2; i++) {
            temp = a[i][j];
            a[i][j] = a[n-1-i][j];
            a[n-1-i][j] = temp;
        }
    }
    printf("Matrix after 90 degree clockwise rotation:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}