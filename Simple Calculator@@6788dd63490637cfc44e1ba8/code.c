#include <stdio.h>
int main() {
    float a,b;
    char c;
    scanf("%f%f",&a,&b);
    scanf(" %c",&c);
    if (c=='+')
    printf("%f",a+b);
    else if (c=='-')
    printf("%f",a-b);
    else if (c=='*')
    printf("%f",a*b);
    else if (c=='/' and b!=0)
    printf("%f",a/b);
    else if (c=='/' and b==0)
    printf("Error");

    return 0;
}