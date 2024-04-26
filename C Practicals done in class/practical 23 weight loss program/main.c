#include <stdio.h>

int main () {

    int weight;
    int i;

    printf("enter the your weight :  \n");
    scanf("%d" , &weight);

    while(weight>=70){

        printf("You are over weight and need to go to gym \n");

        printf("Enter your new weight : \n");
        scanf("%d" , &weight);
        if (weight<=70)
        {
            printf("take rest and good job");
        }
        
    }

    return 0;
}