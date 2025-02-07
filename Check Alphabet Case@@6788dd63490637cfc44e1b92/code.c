#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[100];
    scanf("%c",&a);
    if (a>='A' && a<='Z')
    printf("Uppercase");
    else if (a>='a' && a<='z')
    printf("Lowercase");
    else
    printf("Not an alphabet");
    return 0;
}