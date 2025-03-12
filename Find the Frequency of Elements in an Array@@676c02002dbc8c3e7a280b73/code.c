#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int flag;
    for(i=0;i<n;i++)
    {
     
if (i==0)
     {
     flag=1;
     int d=0; 
     for(int j=0;j<n;j++)
     {
        if (a[i]==a[j])
        d++;
     }
     printf("%d %d",a[i],d);
     printf("\n");
    }

    //else if ( i!=0 && a[i+1]==a[i])
    //{
     //   continue;
   // }

else
    { 
        flag = 0;
    }

if (flag==0)
    {
        for (int k=i-1;k>=0;k--)
        {
            if (a[i]==a[k])
           {
            continue;
           } 
        
            else
            {
               int c=0; 
               for(int l=i+1;l<n;l++)
              {
               if (a[i]==a[l])
               c++;
              }
                printf("%d %d",a[i],c);
                printf("\n");
            }
     
        
        }
        
    }
     
    }
    return 0;
}