#include <stdio.h>

int main () {

    float v,u,a,t;

    printf("enter the values : \n");
    scanf("%f %f %f", &u,&a,&t);

    v = u+a*t;
    
    printf("the value of v is : %0.2f", v);
    return 0;
}