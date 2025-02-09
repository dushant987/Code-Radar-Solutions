#include <stdio.h>
int main() {
    float a,b;
    char c;
    scanf(" %d %d", &a, &b);
    scanf(" %c",&c);
    if (c=='+')
    printf("%d",a+b);
    else if (c=='-')
    printf("%d",a-b);
    else if (c=='*')
    printf("%d",a*b);
    else if (c=='/' && b!=0)
    printf("%d",a/b);
    else if (c=='/' && b==0)
    printf("Error");

    return 0;
}