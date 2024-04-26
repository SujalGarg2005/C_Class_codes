#include <stdio.h>

int main () {

    int num , rem , cube , temp , sum = 0;

    printf("Enter the number : \n");
    scanf("%d" , &num);

    temp = num;

    for(num;num>0;num/10){
        rem = num%10;
        cube = rem*rem*rem;
        sum = sum + cube;
        num = num/10;
        

    }
    if(sum == temp){
            printf("%d is an Armstrong number" , temp);
        }
    else{
            printf("%d is not an Armstrong number" , temp);
        }

    return 0;
}