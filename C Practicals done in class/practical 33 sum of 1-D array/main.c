#include <stdio.h>

int main() {
    // int array[] = {4,6,7,8};
    // int array_size = sizeof(array) / sizeof(array[0]);
    // int sum = 0;

    // for (int i = 0; i < array_size; ++i) {
    //     sum += array[i];
    // }

    // printf("Sum of array elements: %d\n", sum);

    int array[2][2]={
        {1,2}, {2,3}
    };

    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            printf("%d" , array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
