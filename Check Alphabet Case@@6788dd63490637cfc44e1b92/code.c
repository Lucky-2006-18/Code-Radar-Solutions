#include <stdio.h>
#include<ctype.h>
int main(){
    char word;
    scanf("%c",&word);
    if(isupper(word))
    printf("Uppercase");
    else if(islower(word))
    printf("Lowercase");
    else
    printf("Not an alphabet");
    return 0;
}