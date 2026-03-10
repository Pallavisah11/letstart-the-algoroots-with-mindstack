#include <stdio.h>
int equation(int a, int b, int c) {
    return (a*a*a + 3*a*a*b + 3*a*b*b + b*b*b);
}
int main() {
    int a, b, c, result;
    printf("Enter values of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    result = equation(a, b, c);
    printf("Result = %d", result);
    return 0;
}