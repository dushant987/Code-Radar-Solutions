#include <stdio.h>
int main(){
    int n;
    scanf("%d");
    int a[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (i=1;i<n-1;i++)
    {
        if (a[0]>a[1])
        printf("%d",a[0]);
        else if (a[i]>a[i-1] && a[i]<a[i+1])
        {
            break;
        }
        else
        printf("%d",a[n-1]);
        return 0;
    }
    printf("%d",a[i]);
    return 0;
}
