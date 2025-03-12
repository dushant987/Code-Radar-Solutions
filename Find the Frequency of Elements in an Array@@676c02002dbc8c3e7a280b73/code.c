#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
       int d=0; 
       for(int j=0;j<n;j++)
       {
         if (a[i]==a[j])
         d++;
       }
         printf("%d %d",a[i],d);
         printf("\n");

      for(int j=i+1;j<n;j++)
      {
        if( a[i]==a[j])
        {
            continue;
        }
      }
    }

  return 0;
}