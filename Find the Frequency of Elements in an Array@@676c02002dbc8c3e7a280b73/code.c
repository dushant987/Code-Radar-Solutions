#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if (a[i]== -1)
        {
            continue;
        }
     int b=1;
     for(int j=i+1;j<n;j++)
     {
        if (a[i]==a[j])
        b++;
        a[j]== -1;
     }
     printf("%d %d",a[i],b);
     printf("\n");
    }

    return 0;
}