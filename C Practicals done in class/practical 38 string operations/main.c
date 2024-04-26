#include <stdio.h>
#include <string.h>

int main () {

    char str1[20] = "computer";
    char str2[20] = "programming";

    char str3[20] = "comp";
    char str4[20] = "puter";

    strncpy(str1,str2,4);

    strncat(str3,str4,0);

    printf("%s \n" , str1);
    printf("%s", str1);




    return 0;
}