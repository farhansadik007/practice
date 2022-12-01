#include <stdio.h>

void sum(int arr[], int N) {
    int count = 0;
    for (int i = 0; i < N; i++)
            if(arr[i]%10==0) count+=arr[i];
    printf("%d", count);
}
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
            scanf("%d", arr+i);
    sum(arr, N);
    
    return 0;
}
