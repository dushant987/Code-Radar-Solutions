#include <stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    if (a[0]>a[1])
    {
        printf("%d",a[0]);
        return 0;
    }
    for (i=1;i<n-1;i++)
    {
         
         if (a[i]>a[i-1] && a[i]<a[i+1])
        {   
           printf("%d",a[i]);
           return 0;
        }

    }
        
       
        printf("%d",a[n-1]);

    return 0;
}
