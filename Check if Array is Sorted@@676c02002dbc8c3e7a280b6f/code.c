#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
     if(a[i]<=a[i+1])
     {
      continue;
     }
     else
     {
     printf("Not Sorted");
     return 0;
     }
    }
    printf("Sorted");
    
    return 0;
}