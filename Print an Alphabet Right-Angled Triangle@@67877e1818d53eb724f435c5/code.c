#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {  // Loop for rows
        for (j = 0; j < i; j++) {  // Loop for printing characters
            printf("%c ", 'A' + j);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
