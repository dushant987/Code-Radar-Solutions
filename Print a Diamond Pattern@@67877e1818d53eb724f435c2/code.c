#include <stdio.h>
int main(){
    int n,i,j,k,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<n-1;j++)
        printf(" ");
        for(k=1;k<2*i-1;k++){
            printf("*");
        }
    }
    for(a=1;a<n;a++){
        for(b=1;b<=a;b++){
            printf(" ");
        }
        for(c=1;c<k-2;c++)
        pritnf("*");

    }
    k=k-2;

    return 0;
}