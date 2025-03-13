#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,check=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    
    {
        if (check>0)
    {
      continue;
    }
        
        int mark=0;
        check=0;
        for(int k=0;k<i;k++)
        if( a[i]==a[k])
        mark++;
        check=mark;
       
       int d=0; 
       for(int j=0;j<n;j++)
       {
         if (a[i]==a[j])
         d++;
       }
         printf("%d %d",a[i],d);
         printf("\n");

      
    }

  return 0;
}