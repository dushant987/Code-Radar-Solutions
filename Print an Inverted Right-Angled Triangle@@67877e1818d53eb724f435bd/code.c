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
        
        i=1;
    
        while(i<=j)
       {
            printf("* ");
             i++;
        }
        printf("\n");
     j--;
    }
    return 0;
}