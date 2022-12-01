#include <stdio.h>

int main()
{
    int a, b, *p, *q;
    float avg;

    p = &a, q = &b;
    scanf("%d %d", p, q);
    avg = (*p+*q)/2.0;
    printf("%0.3f", avg);
    return 0;
}
