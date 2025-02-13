#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    
    int c = (int)sqrt(a);  // Use sqrt and explicitly cast to int
    
    if (b == c)
        printf("Yes");
    else
        printf("No");
    
    return 0;
}