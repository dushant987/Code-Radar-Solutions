#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(a[i]>a[j])
            a[i]=a[j];
            a[j]=a[i];
        }
    }
    printf("%d",a[i]);

    for(i=0;i<n-1;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(a[i]<a[j])
            a[i]=a[j];
            a[j]=a[i];
        }
    }
    printf("%d",a[i]);

    
    return o;
}