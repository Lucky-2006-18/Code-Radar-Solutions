#include <stdio.h>
#include<ctype.h>
int main(){
    char b,a;
    scanf("%c",&b);
    if(isalpha(b)){
        a=tolower(b);
        if(a=="a"||a=="i"||a=="e"||a=="o"||a=="u"){
            printf("Vowel");
        }
        else
        printf("Consonant");
    }
    else if(isdigit(b))
    printf("Digit");
    else
    printf("Special Character");
    return 0;
}