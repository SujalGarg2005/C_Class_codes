#include <stdio.h> //with if else

// int main ()  {

//     int age;
//     printf("Enter your age : \n");
//     scanf("%d", &age);

//     if(age>=18){
//         printf("eligible");
//     }
//     else
//     {
//         printf("Not eligible");
//     }

//     return 0;
// }

int main () {

    int age;
    printf("Enter your age : \n");
    scanf("%d", &age);

    (age>=18)?printf("yes"):printf("no");

    return 0;

    
}