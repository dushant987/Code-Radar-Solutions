#include <stdio.h>

int main() {
    int n,i,j,b,c;
    scanf("%d",&n);
    i=1;
    while(i<=n){
        j=1;
        while(j<=n-1)
        {
            printf(" ");
            j++;
        }
        b=1;
        c=1;
        while(b<=c)
        {
            printf("*");
            c=c+2;
        }
        i++;
    }
    return 0;
}