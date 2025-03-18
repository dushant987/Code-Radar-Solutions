#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d",&a[i]);

    int visited[n];

    for(int i = 0; i < n - 1; i++)
    {
        if(visited[i]) continue;
        int count = 0;
        for(int j = 0; j < n - 1; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d %d", a[i], count);
        printf("\n");
    }

    
    return 0;
 }