// print sum of series 1 + 1/2 + 1/3 + .....+ 1/n
#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: "); 
    scanf("%d", &n);    
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    printf("Sum of the series 1 + 1/2 + 1/3 + ... + 1/%d is: %.6f\n", n, sum);
            
    
    return 0;
}