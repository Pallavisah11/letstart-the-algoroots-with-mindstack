#include <stdio.h>
#include <string.h>

int main() {
    int n, level = 0, valleys = 0;
    char steps[100];

    scanf("%d", &n);
    scanf("%s", steps);

    for(int i = 0; i < n; i++) {
        if(steps[i] == 'U') {
            level++;
            if(level == 0) {
                valleys++;
            }
        }
        else if(steps[i] == 'D') {
            level--;
        }
    }

    printf("%d", valleys);

    return 0;
}