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
        b++;
      }
      if (i==1 || i==n || b==1 || b==n)
      printf("*");
      else
      printf(" ");
      i++;
      printf("\n");
    }

    return 0;
}