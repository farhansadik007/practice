#include<stdio.h>
int sum(int digit) {
    if(digit==1) return 1;
    int total = sum(digit-1);
    return total+digit;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", sum(n));
    return 0;
}
