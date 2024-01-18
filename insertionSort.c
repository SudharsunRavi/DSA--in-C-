#include <stdio.h>

void insertionSort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && arr [j-1] > arr[j]){
            int temp=arr [j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}

int main()
{
    int arr[] = {12, 76, 83, 5, 20, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before insertion Sort: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    insertionSort(arr, n);

    printf("After insertion Sort: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}