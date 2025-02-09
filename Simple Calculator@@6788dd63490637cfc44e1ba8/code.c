#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    int c;
    scanf("%d%d",&a,&b);
    if (c=="+")
    printf("%d%d",a+b);
    else if (c=="-")
    printf("%d%d",a-b);
    else if (c=="*")
    printf("%d%d",a*b);
    else if (c=="/")
    printf("%d%d",a/b);
    else
    printf("Error");

    return 0;
}