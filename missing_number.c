// an array contain n different number from 0 to n. figure out the missing number
#include <stdio.h>

int main() {
    int arr[] = {0, 1, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int missing_number = total - sum;
    printf("The missing number is: %d\n", missing_number);
       
    return 0;
}