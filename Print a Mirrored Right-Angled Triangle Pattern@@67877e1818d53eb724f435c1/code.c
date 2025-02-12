#include <stdio.h>
int main(){
    int n,b,j;
    scanf("%d",&n);
    i=1;
    while(n>0)
    {
      b=1;
      while(b<n)
      {
        printf(" ");
        b++;
      }
      j=1;
      while(j<=i)
      {
        printf("*");
        j++;
      }
      printf("\n");
      i++;
      n--;
    }
    return 0;
}