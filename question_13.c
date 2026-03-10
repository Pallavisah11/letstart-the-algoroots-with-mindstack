#include <stdio.h>
int main() {
    int n;
    printf("Enter number of intervals: ");
    scanf("%d", &n);
    int intervals[n][2];
    printf("Enter intervals (start end):\n");
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &intervals[i][0], &intervals[i][1]);
    }
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(intervals[i][0] > intervals[j][0]) {
                int temp1 = intervals[i][0];
                int temp2 = intervals[i][1];
                intervals[i][0] = intervals[j][0];
                intervals[i][1] = intervals[j][1];
                intervals[j][0] = temp1;
                intervals[j][1] = temp2;
            }
        }
    }
    int start = intervals[0][0];
    int end = intervals[0][1];
    printf("Merged Intervals:\n");
    for(int i = 1; i < n; i++) {
        if(intervals[i][0] <= end) {
            if(intervals[i][1] > end)
                end = intervals[i][1];
        }
        else {
            printf("[%d,%d] ", start, end);
            start = intervals[i][0];
            end = intervals[i][1];
        }
    }
    printf("[%d,%d]", start, end);
    return 0;
}