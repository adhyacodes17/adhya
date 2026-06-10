#include <stdio.h>

int main() {
    int num, rem;
    long long product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;
        product = product * rem;
        num = num / 10;
    }

    printf("Product of digits = %lld\n", product);

    return 0;
}