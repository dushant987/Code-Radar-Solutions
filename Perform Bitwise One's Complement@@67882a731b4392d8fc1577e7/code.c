#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,result1,result2;
    scanf("%d%d",&a,&b);
    resul1t= ~a|~b ;
    printf("%d",result1);
    result2=~a&~b;
    printf("%d",result2);
    return 0;
}