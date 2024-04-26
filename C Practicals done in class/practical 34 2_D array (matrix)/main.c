#include <stdio.h>

int main () {
    
    int array[2][3] = {
        {1,4,3},
        {2,5,9}
    };
    
    for(int i =0;i<3;i++){
        for(int j=0;j<2;j++){
           printf("%d " , array[j][i]);
            
        }
        printf("\n");
    }
    return 0;
}