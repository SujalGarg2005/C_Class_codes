#include <stdio.h>

int main () {

    int age;

    printf("Enter the age : \n");
    scanf("%d" , &age);

    if (age>=18)
    {
        printf("You are eligible to vote");
    }
    else if (age<=0)
    {
        printf("Invalid age");
    }
    else
    {
        printf("You are under age");
    }

    return 0;

    
    
}