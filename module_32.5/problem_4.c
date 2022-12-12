#include<stdio.h>
void print(int digit) {
    if(digit==0) return;
    printf("%d ", digit);
    print(digit-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}
