#include<stdio.h>
int sum(int arr[], int i, int n) {
    if(i==n) return 0;
    int total = sum(arr, i+1, n);
    return total+(arr[i]%10);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%d", sum(arr,0, n));
    return 0;
}
