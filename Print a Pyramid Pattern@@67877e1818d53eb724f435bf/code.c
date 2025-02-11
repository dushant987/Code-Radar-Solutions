#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    i=1;
    while(i<n){
     while (i<=n-1){
        printf(" ");
     }
     j=1;
     while(i>=j){
        printf("*");
        j++;
     }
     i++;
     printf("\n");
    }
    return 0;
}