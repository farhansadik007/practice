#include <stdio.h>
int sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}
void largest(int arr[], int k, int n) {
    printf("%d largest element = %d\n", k, arr[n-k]);
}
void smallest(int arr[], int k, int n) {
    printf("%d smallest element = %d\n", k, arr[k-1]);
}
int main()
{
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);
    sort(arr, n);
    largest(arr, k, n);
    smallest(arr, k, n);
    return 0;
}
