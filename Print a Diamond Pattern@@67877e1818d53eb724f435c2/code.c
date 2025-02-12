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
    }
    for(int d=1;d<n;d++){
       for(int e=1;e<=d;e++){
        printf(" ");
       }
       for(int f=n-1;f<=2*f-1;f--){
        printf("*");
       }
    }
    return 0;
}