#include <stdio.h>

void area(int R) {
    printf("%f", 3.1416*R*R);
}
int main() {
    int R;
    scanf("%d", &R);
    area(R);
    return 0;
}
