#include <stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    x=n;
    for(int i=1;i<=x;i++)
    {
     for(int j=1;j<=n;j++)
     {
        printf("%d ",j);
     }
     printf("\n");
     n--;
    }
    return 0; 
}