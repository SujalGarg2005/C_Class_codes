#include <stdio.h>

int main () {

    int a = 5,b;
    b= a++ + a++ + a++;

    printf("%d \n",a);
    printf("%d",b);

    return 0;
}