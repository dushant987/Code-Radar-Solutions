#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    char c;
    scanf("%d%d",&a,&b);
    if (c=="+")
    printf(a+b);
    else if (c=="-")
    printf(a-b);
    else if (c=="*")
    printf(a*b);
    else if (c=="/")
    printf(a/b);
    else
    printf("Error");

    return 0;
}