#include <stdio.h>

// int main() {
//     int num = 1;

//     while(num <= 10) {
//         printf("%d\n", num++);
//     }

//     return 0;
// }

// int main() {
//     int start, diff, end, sum = 0;

//     printf("Start : ");
//     scanf("%d", &start);

//     printf("Diff : ");
//     scanf("%d", &diff);

//     printf("End : ");
//     scanf("%d", &end);

//     while(start <= end) {
//         sum += start;
//         printf("%d\t%d\n",(start / diff - 1), start);
//         start += diff;
//     }

//     printf("sum : %d", sum);

//     return 0;
// }

int main() {
    for (int i=1; i<=10;i++) {
        for(int j=1; j<=10; j++) {
            printf("%d X %d\t=  %d\n", i, j, j*i);
        }

        printf("\n");
    }
    

    

    return 0;
}