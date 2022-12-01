#include <stdio.h>
void swap(int *arr1, int *arr2) {
    int temp = *arr1;
    *arr1 = *arr2;
    *arr2 = temp;
}
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
                if(arr[j]>arr[j+1]) swap(&arr[j],&arr[j+1]);
    
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    return 0;
}
