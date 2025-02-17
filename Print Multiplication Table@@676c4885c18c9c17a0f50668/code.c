#include <stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
    x = n*i;
    printf("%d x %d = %d",n,i,x);
    printf("\n");
    }
    return 0;
}