#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a ,i,sum=0;
    scanf("%d",&a);
    if (a==0 || a==1)
    printf("Not Prime");
    for (i=1;i<=a;i++);
    {
        if(a%i==0)
        sum=sum+1;
    }
    if (sum==2)
    printf("Prime");
    else
    printf("Not Prime");
    return 0;
}