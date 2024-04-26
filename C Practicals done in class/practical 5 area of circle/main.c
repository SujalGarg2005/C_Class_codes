// program for calculation of area of the circle

#include <stdio.h>

int main() {

    float r ;
    const float PI = 3.14;
    float cir ;

    printf("enter the radius : \n");
    scanf("%f" , &r);

    cir = 2 * PI * r ; 

    printf("the cir of circle : %f",cir);

    return 0;
}