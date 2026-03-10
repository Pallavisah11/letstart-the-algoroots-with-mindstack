#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n == 0) {
        printf("No Factors");
        return 0;
    }
    n = abs(n);
    int first = 1;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            if(!first)
                printf(",");
            printf("%d", i);
            first = 0;
        }
    }
    return 0;
}