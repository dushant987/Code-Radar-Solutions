#include <stdio.h>

int main() {
    int n,i,j,b,c;
    scanf("%d",&n);
    i=1;
    while(i<=n){
        j=1;
        while(j<=n-i)
        {
            printf(" ");
            j++;
        }
        b=1;
        while(b<=2*i-1)
        {
            printf("*");
            b++;
        }
        i++;
    }
    return 0;
}