#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i=1 ,j ;
    scanf("%d",&j);
    while(j>i){
        printf("\n");
    while(i<=j){
        printf("*");
        i++;
    }
    i++;
    }
    return 0;
}