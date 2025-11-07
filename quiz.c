#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    char chars[256];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c != '\n' && c != ' ') {
            if (freq[(int)c] == 0)
                chars[count++] = c;
            freq[(int)c]++;
        }
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (freq[(int)chars[i]] < freq[(int)chars[j]] ||
               (freq[(int)chars[i]] == freq[(int)chars[j]] && chars[i] > chars[j])) {
                char temp = chars[i];
                chars[i] = chars[j];
                chars[j] = temp;
            }
        }
    }

    printf("Characters in decreasing frequency:\n");
    for (int i = 0; i < count; i++)
        printf("%c - %d\n", chars[i], freq[(int)chars[i]]);

    int sum = freq[(int)chars[0]] + freq[(int)chars[count - 1]];
    printf("Sum of most and least frequent = %d\n", sum);

    return 0;
}
