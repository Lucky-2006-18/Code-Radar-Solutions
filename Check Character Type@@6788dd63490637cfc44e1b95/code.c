#include <stdio.h>
int main(){
    char b;
    scanf("%c",&b);
    if(isalpha(b)){
        a=tolower(b);
        if(a=="a"||a=="i"||a=="e"||a=="o"||a=="u"){
            printf("Vowel");
        }
        else
        printf("Consonant");
    }
    else if(b==1||b==2||b==3||b==4||b==5||b==6||b==7||b==8||b==9||b==0)
    printf("Digit");
    else
    printf("Special Character");
    return 0;
}