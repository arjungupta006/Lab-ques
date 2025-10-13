#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int octal[32];
    int i = 0;
    while (num > 0)
    {
        octal[i] = num % 8;
        num /= 8;
        i++;
    }
    printf("Octal representation: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octal[j]);
    printf("\n");

    return 0;
}