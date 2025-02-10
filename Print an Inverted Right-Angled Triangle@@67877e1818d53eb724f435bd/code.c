#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() 
{
    int i ,j ;
    scanf("%d",&j);
    while(j>0)
    {
        printf("\n");
        i=1;
    
        while(i<=j)
       {
            printf("* ");
             i++;
        }
     j--;
    }
    return 0;
}