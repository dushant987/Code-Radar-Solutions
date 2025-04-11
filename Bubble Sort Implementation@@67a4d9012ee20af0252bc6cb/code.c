void bubbleSort (int arr[] ,int n){
    int j,store;
    for (int i=0;i<=n-2;i++){
    for(int j=0;j<=n-1;j++)
    if (arr[i]>arr[j])
    {
     store = arr[j];
     arr[j] = arr[i];
     arr[i]= store;
    }
}
  
}

void printArray(int arr[],int n){
    for(int i=0;i<=n-1;i++)
    printf("%d ",arr[i]);
}