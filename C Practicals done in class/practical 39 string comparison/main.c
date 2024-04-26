#include <stdio.h>
#include <string.h>

int main () {

    char st1[] = "hello" , st2[] = "hello";

    int a = strcmp(st1,st2);

    if(a>0){
        printf("str1 is greater than str2 \n");
    }
    if(a<0){
        printf("str1 is less than str2 \n");
    }
    if(a==0){
        printf("str1 is equal to str2 \n");
    }

    return 0;

}