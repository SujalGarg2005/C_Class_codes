#include <stdio.h>

int main () {

    int count = 0 , num;

    printf("Enter a number : \n");
    scanf("%d" , &num);

    while (num != 0)
    {
        num = num/10;
        count++;             // this condition can be used for (for loop) also .
    }
    printf("count is %d" , count);


    return 0;
    
    
    
}