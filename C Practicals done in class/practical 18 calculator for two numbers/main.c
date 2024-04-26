#include <stdio.h>

int main () {

    float x , y;
    int z;

    printf("enter the two numbers : \n");
    scanf("%f %f", &x , &y);
    printf("0-odd , 1-sub , 2-add , 3-divide");
    scanf("%d",&z);

    switch(z) {

        case (0):
            printf("%f",x+y);
            break;
        
        case (1):
            printf("%f",y-x);
             break;
        
        case (2):
            printf("%f" ,x*y);
             break;
        
        case(3):
            printf("%f" , x/y);
             break;
        
        default:
        break;

    }

    return 0;

}