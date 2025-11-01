// sum of 1! + 2! + 3! + ..... + n!
#include <stdio.h>

int main() {

    int n;
    printf("Enter a positive integer n: "); 
    scanf("%d", &n);
    unsigned long long sum = 0;
    unsigned long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;  
        sum += factorial; 
    }
    printf("Sum of the series 1! + 2! + 3! + ... + %d! is: %llu\n", n, sum);
    return 0;
}       