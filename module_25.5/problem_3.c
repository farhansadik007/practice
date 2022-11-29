#include <stdio.h>
#include <math.h>

void cost(char str[])
{
    int cost = 0, count;
    for (int i = 0; str[i] != '\0'; i++)
        cost += (str[i] - 96);
    
    for (int i = 0; i < 27; i++)
    if(pow(2, i)==cost) {
        count = i;
    }
    
    if (pow(2, count) == cost) {
        printf("YES\n");
        printf("cost = 2^%d", count);
    }else printf("NO");
}

int main()
{
    char str[50];
    scanf("%s", &str);
    cost(str);
    return 0;
}
