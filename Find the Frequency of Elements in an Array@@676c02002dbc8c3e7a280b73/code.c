#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int mark;
    for(i=0;i<n;i++)
    {
       
       int d=1; 
       for(int j=i+1;j<n;j++)
       {
         if (a[i]==a[j])
         mark=a[i];
         d++;
       }
         printf("%d %d",a[i],d);
         printf("\n");
    }

  return 0;
}