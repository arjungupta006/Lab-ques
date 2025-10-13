#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int totalSum = 0, leftSum = 0;
    for (int i = 0; i < n; i++)
        totalSum += arr[i];

    int found = -1;
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            found = i;
            break;
        }
        leftSum += arr[i];
    }

    if (found != -1)
        printf("Index where left and right sums are equal: %d\n", found);
    else
        printf("No such index found.\n");

    return 0;
}
