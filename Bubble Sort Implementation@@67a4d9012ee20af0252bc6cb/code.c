void bubbleSort (int arr[] ,int n){
    int j,b;
    for (int i=0;i<=n;i++){
    if (arr[i]<arr[j])
    {
     b = arr[i];
     arr[i] = arr[j];
     arr[j]=b;
    }
}
}

void printArray(int arr[],int n){
    for(int i=0;i<=n;i++)
    printf("%d ",arr[i]);
}