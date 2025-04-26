#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    int n = strlen(str) - 1;
    for (int i = n-1; i >= 0; i--)
        printf("%c", str[i]);
    return 0;
}
