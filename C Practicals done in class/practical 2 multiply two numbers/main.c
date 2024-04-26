#include <stdio.h>

void sum(int a,int b) {
    printf("%d + %d = %d", a, b, a+b);
}

void mul(int a , int b){
    printf("%d * %d = %d", a, b, a*b);
}

int main() {

    int a,b;
    printf("enter numbers : ");
    scanf("%d %d",&a , &b);
    mul(a,b);

    return 0;
}