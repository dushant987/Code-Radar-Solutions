#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
     if (n==1)
    {
     printf("-0");
    }
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
   
    for(int i=0; i<n-1; i++)
    {
        int temp;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j]){
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
    int b=0;
     if (a[i]==a[i+1])
     {
        b++;
     }
    
     else
     {
     printf("%d",a[i+1]);
     return 0;
     }
      
      if (b>0)
      {
        printf("-1");
        return 0;
      }
    }

    
    return 0;
}