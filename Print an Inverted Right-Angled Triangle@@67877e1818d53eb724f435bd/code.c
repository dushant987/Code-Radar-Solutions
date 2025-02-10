#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i ,j ;
    scanf("%d",&j);
    i=1;
    while(j>i){
        printf("/n");
    }
    while(i<=3){
        printf("*");
        i++;
    }
    i++;

    return 0;
}