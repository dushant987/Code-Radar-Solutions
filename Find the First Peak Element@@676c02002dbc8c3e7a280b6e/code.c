#include <stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d");
    int a[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    bool x;
    for (i=1;i<n-1;i++)
    {
         
         if (a[i]>a[i-1] && a[i]<a[i+1])
        {   
          x = true
          break;
        }

    }
        if (a[0]>a[1])
        printf("%d",a[0]);
        else if (x =true)
        {
        printf("%d",a[i]);
        }
        else
        printf("%d",a[n-1]);

    return 0;
}
