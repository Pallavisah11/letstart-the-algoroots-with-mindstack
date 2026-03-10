#include <stdio.h>
#include <string.h>
int main() {
    int n;
    char name[100], minItem[100];
    int price, discount;
    int discountAmount, minDiscount = 1000000000;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf(" %[^,],%d,%d", name, &price, &discount);
        discountAmount = (price * discount) / 100;
        if(discountAmount < minDiscount) {
            minDiscount = discountAmount;
            strcpy(minItem, name);
        }
    }
    printf("%s", minItem);
    return 0;
}