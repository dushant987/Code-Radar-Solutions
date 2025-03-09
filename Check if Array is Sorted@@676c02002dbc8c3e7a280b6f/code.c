#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    bool x;
    for(i=0;i<n-1;i++)
    {
     if(a[i]<=a[i+1])
     {
      x = true;
      continue;
     }
     else
     {
     x = false;
     printf("Not Sorted");
     break;
     }
    }
    if (x==true)
    printf("Sorted");
    
    return 0;
}