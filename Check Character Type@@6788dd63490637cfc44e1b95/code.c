#include<stdio.h>
#include<ctype.h>
int main() {
    char b;
    
    printf("Enter a character: ");
    scanf("%c", &b);

    if (isalpha(b)) { // Check if b is a letter
        char lower = tolower(b); // Convert to lowercase
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else if (isdigit(b)) { // Check if b is a digit
        printf("Digit\n");
    } else { // Otherwise, it's a special character
        printf("Special Character\n");
    }

    return 0;
}