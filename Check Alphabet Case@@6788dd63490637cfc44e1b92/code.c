#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%s",&a);
    if (a<=A && a>=Z)
    printf("Uppercase");
    else
    printf("Lowercase");
    return 0;
}