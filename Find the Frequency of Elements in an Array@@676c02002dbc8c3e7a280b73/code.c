#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int b;
    for(i=0;i<n;i++)
    {
     for(int j=1;j<n-1;j++)
     {
        if (a[i]==a[j])
        b++;
     }
     printf("%d %d",a[i],b);
     printf("\n");
    }

    return 0;
}