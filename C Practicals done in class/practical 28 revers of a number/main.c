#include <stdio.h>

int main () {

    int count = 0 , num , rem , revnum;

    printf("Enter a number : \n");
    scanf("%d" , &num);

    while (num != 0)
    {
        num = num/10;
        count++;     
        rem = num%10;
        revnum = revnum*(0+rem);

    }
    printf("count is %d" , revnum);


    return 0;
    
    
    
}