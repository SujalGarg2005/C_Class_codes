#include <stdio.h>

int main () {

    int n ;

    printf("enter the value of n : \n");
    scanf("%d" , &n);

    switch (n) {

        case (0):
            printf("monday \n");
            break;
        
        case (1):
            printf("tuesday \n");
            // break;
        
        case (2):
            printf("wednesday \n");
            // break;
        
        case(3):
            printf("thursday \n");
            // break;
        
        case (4):
            printf("friday \n");
            // break;

        case (5):
            printf("saturday \n");
            // break;

        case (6):
            printf("sunday \n");
            // break;


    }

    return 0;

}