#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if (a>b)
    printf("%d",a);
    else if (b>a)
    printf("%d",b);
    return 0;
}