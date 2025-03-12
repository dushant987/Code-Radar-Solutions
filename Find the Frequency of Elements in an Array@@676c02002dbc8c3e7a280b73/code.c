#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,k;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
     
     if (i==0)
     {
     int b=0; 
     for(int j=0;j<n;j++)
     {
        if (a[i]==a[j])
        b++;
        k = a[i];
     }
     printf("%d %d",a[i],b);
     printf("\n");
    }
    else if
    {
        if(a[i+1]==a[i])
        {
            continue;
        }
    }

    else{
        int b=0; 
     for(int j=0;j<n;j++)
     {
        if (a[i]==a[j])
        b++;
        k = a[i];
     }
     printf("%d %d",a[i],b);
     printf("\n");
    }
    }
    
    return 0;
}