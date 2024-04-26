#include <stdio.h>

void funa(int n);
void funb(int n);

void funa(int n){
    if(n>0)
    {
        printf("%d \n" , n);
        funb(n-1);
    }
}

void funb(int n){
    if(n>1)
    {
        printf("%d \n" , n);
        funa(n-1);
    }
}

int main () {

    int num = 20;
    funa(num);

    return 0;
}