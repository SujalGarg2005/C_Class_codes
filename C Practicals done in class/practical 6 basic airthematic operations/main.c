#include <stdio.h>

int main () {

    int a,b;
    printf("enter the two numbers: \n");
    scanf("%d %d", &a,&b);
    printf("%d %d %d %d %d",a+b,a-b,a*b,a/b,a%b);

    return 0;
}