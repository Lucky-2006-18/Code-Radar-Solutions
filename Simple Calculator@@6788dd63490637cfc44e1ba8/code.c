#include <stdio.h>

int main() {
    int a, b;
    char c;
    
    scanf("%d%d", &a, &b);
    getchar(); // This will consume the newline left in the buffer
    
    scanf("%c", &c);
    
    if (c == '+') {
        printf("%d", a + b);
    } 
    else if (c == '-') {
        printf("%d", a - b);
    } 
    else if (c == '*') {
        printf("%d", a * b);
    } 
    else if (c == '/') {
        if (b != 0) {
            printf("%d", a / b);
        } else {
            printf("Error: Division by zero");
        }
    } 
    else {
        printf("Invalid operator");
    }
    
    return 0;
}