#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int b=0;
    for(int j=0;j<n;j++)
    {
        if (a[i]%2==0)
        {
            b++;
        }
    }
    printf("%d ",b);
    printf("%d",n-b);

    return 0;
}