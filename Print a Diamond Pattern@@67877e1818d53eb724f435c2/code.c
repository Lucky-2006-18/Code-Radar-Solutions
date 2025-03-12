#include <stdio.h>

int main() {
    int n, i, j, k;
    scanf("%d", &n);

    // Upper part of the diamond
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print stars (left half)
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the diamond
    for (i = n - 1; i >= 1; i--) {
        // Print spaces
        for (j = n; j > i; j--) {
            printf(" ");
        }
        // Print stars (right half)
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}