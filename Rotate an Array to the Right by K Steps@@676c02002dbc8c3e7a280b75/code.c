#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int k;
    scanf("%d",&k);
    if (k==0){
      for(int i=0;i<n;i++)
      printf("%d",a[i]);
    }
    else{
        for(int i=0;i<=k;i++){
            a[i+k]=a[0];
        }

        for(int j=0;j<k;j++){
            a[n-(j+1)]=a[j];
        }
        
        for(int i=0;i<n;i++)
        printf("%d",a[i]);
    }
   
    return 0;
}