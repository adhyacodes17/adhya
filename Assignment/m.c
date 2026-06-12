#include <stdio.h>

int main() {
    int start, end;

    printf("Enter starting range: ");
    scanf("%d", &start);

    printf("Enter ending range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int num = start; num <= end; num++) {
        int temp = num, sum = 0, digit;

        while (temp > 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}