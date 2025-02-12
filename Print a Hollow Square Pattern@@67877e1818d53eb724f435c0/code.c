#include <stdio.h>
int main(){
    int n,i,b;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
      b=1;
      while(b<=n)
      {
        printf("*");
        b++;
      }
      i++;
      printf("\n");
    }

    return 0;
}