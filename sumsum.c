// write a program to find the sum of digits of a number until a single digit is obtained 
#include <stdio.h>

int main() {
    int num, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0 || sum > 9) {
        if (num == 0) {
            num = sum;
            sum = 0;
        }
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("The single digit sum is: %d\n", sum);
    return 0;
}