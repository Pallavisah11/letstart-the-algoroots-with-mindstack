#include <stdio.h>
int main() {
    int sem;
    printf("Enter no of semester: ");
    scanf("%d", &sem);
    for(int i = 1; i <= sem; i++) {
        int subjects;
        printf("Enter no of subjects in %d semester: ", i);
        scanf("%d", &subjects);
        int marks[subjects];
        int max = -1;
        printf("Marks obtained in semester %d: ", i);
        for(int j = 0; j < subjects; j++) {
            scanf("%d", &marks[j]);
            if(marks[j] < 0 || marks[j] > 100) {
                printf("You have entered invalid mark.\n");
                return 0;
            }
            if(marks[j] > max) {
                max = marks[j];
            }
        }
        printf("Maximum mark in %d semester: %d\n", i, max);
    }
    return 0;
}