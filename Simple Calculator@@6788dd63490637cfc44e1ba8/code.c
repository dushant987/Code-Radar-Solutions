#include <stdio.h>
int main() {
    float a,b;
    char c;
    scanf("%f%f",&a,&b);
    scanf(" %c",&c);
    if (c=='+')
    printf("%.2f",a+b);
    else if (c=='-')
    printf("%.2f",a-b);
    else if (c=='*')
    printf("%.2f",a*b);
    else if (c=='/' && b!=0)
    printf("%.2f",a/b);
    else if (c=='/' && b==0)
    printf("Error");

    return 0;
}