#include <stdio.h>

int main () {

    int max = 0;
    int a = 5;
    int b = 7;
    int c = 2;
    int d = 10;

    (a>max)?(max=a):(max=max);
    (b>max)?(max=b):(max=max);
    (c>max)?(max=c):(max=max);
    (d>max)?(max=d):(max=max);

    printf("%d is the max",max);

    return 0;
}