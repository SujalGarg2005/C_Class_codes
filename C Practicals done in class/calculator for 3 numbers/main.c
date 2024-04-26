#include <stdio.h>

int main () {

    float x , y , w;
    int z;

    printf("enter the two numbers : \n");
    scanf("%f %f %f", &x , &y , &w);
    printf("0-odd , 1-sub , 2-add , 3-divide \n");
    scanf("%d",&z);

    switch(z) {

        case (0):
            printf("%f",x+y+w);
            break;
        
        case (1):
            printf("%f",y-x-w);
             break;
        
        case (2):
            printf("%f" ,x*y*w);
             break;
        
        case(3):
            printf("%f" , x/y/w);
             break;
        
        default:
        break;

    }

    return 0;

}