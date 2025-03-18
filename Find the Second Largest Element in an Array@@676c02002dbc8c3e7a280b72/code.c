#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
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
     if (a[i]==a[i+1])
     {
       continue;
     }
    
     else
     {
     printf("%d",a[i+1]);
     return 0;
     }

    }

    
    return 0;
}