#include <stdio.h>

int main() {
    int num1, num2, num3, num4, max;

    // Input four numbers
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Find the maximum using ternary operator
    max = (num1 > num2) ? ((num1 > num3) ? ((num1 > num4) ? num1 : num4) : ((num3 > num4) ? num3 : num4))
                       : ((num2 > num3) ? ((num2 > num4) ? num2 : num4) : ((num3 > num4) ? num3 : num4));

    // Display the result
    printf("The greatest number is: %d\n", max);

    return 0;
}
