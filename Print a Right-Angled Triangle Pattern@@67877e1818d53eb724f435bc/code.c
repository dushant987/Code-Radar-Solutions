#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i,j;
    scanf("%d",&n);
    i=1;
    while(n>=i)
    {
        n=1;
        while(n>=i){
            printf("*");
            n++;

        }
    }
    i++;
    return 0;
}