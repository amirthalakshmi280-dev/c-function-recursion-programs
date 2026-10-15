#include <stdio.h>

int countDigit(int num, int digit) {
    if (num == 0)
        return 0;

    return (num % 10 == digit) +
           countDigit(num / 10, digit);
}

int main() {
    int num, digit, count;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Enter the digit to count: ");
    scanf("%d", &digit);

    if (num == 0)
        count = (digit == 0) ? 1 : 0;
    else
        count = countDigit(num, digit);

    printf("Digit occurs %d times\n", count);

    return 0;
}
Enter a positive integer: 12232
Enter the digit to count: 2
Digit occurs 3 times
