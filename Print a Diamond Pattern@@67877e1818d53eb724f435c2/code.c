#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int b=1;b<=n-i;b++){
            printf(" ");
        }
        for(int c=1;c<=2*i-1;c++){
            printf("*");
        }
        printf("\n");
    }
    for(int d=n-1;d>=1;d--){
       for(int e=1;e<=n-d;e++){
        printf(" ");
       }
       for(int f=1;f<=2*(d-1)-1;f++){
        printf("*");
       }
       printf("\n")
    }
    return 0;
}