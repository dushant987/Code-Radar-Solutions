#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
     
     if (i==0)
     {
     int d=0; 
     for(int j=0;j<n;j++)
     {
        if (a[i]==a[j])
        d++;
     }
     printf("%d %d",a[i],d);
     printf("\n");
    }

    else if
    {
        if(a[i+1]==a[i])
        {
            continue;
        }
    }

    else
    {
     int b=0; 
     for(int j=0;j<n;j++)
     {
        if (a[i]==a[j])
        b++;
     }
     printf("%d %d",a[i],b);
     printf("\n");
    }
     
    }
    
    return 0;
}