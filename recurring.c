//find the most times appearing element in an array.
#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 3, 4, 1, 3, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_count = 0;  
    int most_frequent = arr[0]; 
    for (int i = 0; i < n; i++) {
        int count = 0;  
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            most_frequent = arr[i];
        }
    }
    printf("Most frequent element is %d, appearing %d times\n", most_frequent, max_count);
        
    return 0;
}   