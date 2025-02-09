#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int c;
    scanf("%d",&c);
    if (c<=0)
    printf("Freezing");
    else
    printf("Above Freezing");
    return 0;
}