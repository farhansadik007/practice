#include <stdio.h>

int recursive_sum(int n) {
    if(n != 0)
    return n + recursive_sum(n-1);
    else return n;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d",recursive_sum(n));
    return 0;
}
