#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>c && b+c>a && c+a>b);
    printf("valid");
    else
    printf("Invalid");
    return 0;
}