#include <stdio.h>

void reverseDigits(int num) {
    if (num == 0)
        return;

    printf("%d", num % 10);
    reverseDigits(num / 10);
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Reversed number: ");

    if (num == 0)
        printf("0");
    else
        reverseDigits(num);

    printf("\n");

    return 0;
}
Enter a positive integer: 12345
Reversed number: 54321
