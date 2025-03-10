#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(a[i]>a[j])
            int temp[1]={0};
            temp[0]=a[i];
            a[i]=a[j];
            a[j]=temp[0];

        }
    }
    printf("%d %d",a[0],a[n-1]);

    
    return 0;
}