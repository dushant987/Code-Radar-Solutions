#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    switch(a){
        case (1,3,5,7,9,11):
        printf("31");
        case (2):
        printf("28");
        default:
        printf("error");

    }
    return 0;
}