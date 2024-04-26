#include <stdio.h>

int main () {
    
    int arraya[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    
    int arrayb[2][3] = {
        {4,2,0},
        {5,1,2}
    };
    
    int arrayc[2][3] = {};
    
    printf("array a : \n");
    
    for(int i =0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d " , arraya[i][j]);
        }
        
        printf("\n");
    }
    
    printf("array b : \n");
    for(int i =0;i<2;i++){
        for(int j =0;j<3;j++){
            printf("%d " , arrayb[i][j]);
        }
        printf("\n");
    }
    
    printf("array c : \n");
    for(int i =0;i<3;i++){
        for(int j =0;j<2;j++){
            printf("%d " , arraya[j][i] + arrayb[j][i]);
        }
        printf("\n");
    }
    return 0;
}