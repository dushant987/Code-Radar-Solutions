#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    i=1;
    while(i<n+n-1)
    {
      b=1;
      while(b<n)
      {
        printf(" ");
        b++;
      } 
      j=1;
      while(j<=2*i-1)
      {
        printf("*");
        j++;
      }
      k=1;
      while(k<i)
      {
        printf(" ");
        k++;
      }
      l=1;
      while(l<n)
      {
        printf("*");
        l++;
      }
      printf("\n");
      i++;
    }
    return 0;
}