#include <stdio.h>

int countVal(int n)
{
    int arr[n], k, count = 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
        if (arr[i] > k || arr[i] < k)
            count++;
    printf("%d\n", count);
}

int main()
{
    int n;
    scanf("%d", &n);
    countVal(n);
    return 0;
}
