#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i ,j ;
    scanf("%d",&j);
    for(i=1;i<=j;i++)
     for(j=1;j>=i;j--){
        printf("*");
        }
    return 0;
}