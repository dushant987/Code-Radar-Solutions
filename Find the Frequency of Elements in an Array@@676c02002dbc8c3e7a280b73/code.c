#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i = 0; i < n; i++)
    scanf("%d",&a[i]);
    for(i = 0; i < n; i++)
    {
        int b=0;
        for(int j=0; j < n; j++)
        {
          if(a[i]=a[j]) 
            b++;
        }
        printf("%d %d",a[i],b);
        printf("\n");

    }

    return 0;
 }