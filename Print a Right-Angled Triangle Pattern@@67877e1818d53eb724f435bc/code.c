#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i,j;
    scanf("%d",&n);
    j=n;
    while (n>0)
    {
       while(n<(j+1)){
       printf("*");
       n++;
       }
    
    printf("\n");
    
    }
    n--;
    return 0;
}