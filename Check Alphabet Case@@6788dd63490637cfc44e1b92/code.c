#include <stdio.h>
#include<ctype.h>
int main(){
    char word;
    scanf("%c",&word);
    if(isupper(word))
    printf("Uppercase");
    else
    printf("Lowercase");
    return 0;
}