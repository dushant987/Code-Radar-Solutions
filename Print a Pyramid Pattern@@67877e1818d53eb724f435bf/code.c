#include <stdio.h>

int main() {
    int n,j,i;
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        i++;
        printf("\n");
    }

    return 0;
}