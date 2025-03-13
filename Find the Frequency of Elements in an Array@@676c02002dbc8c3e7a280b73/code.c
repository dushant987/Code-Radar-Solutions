#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],x,store;
    for(x=0;x<n;x++)
    scanf("%d",&a[x]);
    for(int i=0;i<n;i++)
    x=i;
    a[i]=a[x];
    for(x=0;x<n;x++)
    
    {
        
        int mark=0;
        for(int k=0;k<i;k++)
        if( a[x]==a[k])
        store=x;
        mark++;

    for(i=0;i<n;i++);
     
     if (store=i)
     {
        continue;
     }
       
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