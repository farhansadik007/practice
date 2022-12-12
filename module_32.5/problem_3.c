#include<stdio.h>
void print_2_n(int digit) {
    if(digit==0) return;
    print_2_n(digit-1);
    printf("%d ", digit);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_2_n(n);

    return 0;
}
