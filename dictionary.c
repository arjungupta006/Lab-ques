#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);

    char words[n][100];
    printf("Enter %d words:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%s", words[i]);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(words[i], words[j]) > 0) {  
                char temp[100];
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("\nWords in lexicographical (dictionary) order:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", words[i]);

    return 0;
}