#include <stdio.h>

int main () {

    int num ;

    printf("enter the value of num here : \n");
    scanf("%d",&num);

    switch(num % 2){
        case (0):
            printf("%d is an even number \n",num);
            break;
        
        case (1):
            printf("%d is an odd number",num);
            break;


    }

    return 0;

}