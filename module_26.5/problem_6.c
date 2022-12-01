#include <stdio.h>

void uppercase(char arr[]) {
    for (int i = 0; arr[i]!='\0'; i++)
            if(arr[i]%2==0) arr[i]-=32;
    printf("%s", arr);
    
    
}
int main() {
    char str[100];
    scanf("%s", str);
    uppercase(str);
    return 0;
}
