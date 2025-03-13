#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],x,store;
    for(x=0;x<n;x++)
    scanf("%d",&a[x]);
    //int a[i];
    //for(int i=0;i<n;i++)
    //x=i;
    //a[i]=a[x];
    for(x=0;x<n;x++)
    
    {
        
        int mark=0;
        for(int k=0;k<x;k++)
        if( a[x]==a[k])
        store=x;
        mark++;

    for(x=0;x<n;x++);
     
     if (store=x)
     {
        continue;
     }
       
       int d=0; 
       for(int j=0;j<n;j++)
       {
         if (a[x]==a[j])
         d++;
       }
         printf("%d %d",a[x],d);
         printf("\n");

      
    }

  return 0;
}