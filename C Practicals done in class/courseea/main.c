#include <stdio.h>
#include <stdlib.h>

// Min and max functions
int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

// Declare your rectangle structure here!
typedef struct {
    int x, y, width, height;
} rectangle;

// Function to canonicalize the rectangle
rectangle canonicalize(rectangle r) {
    if (r.width < 0) {
        r.x += r.width;
        r.width = abs(r.width);
    }
    if (r.height < 0) {
        r.y += r.height;
        r.height = abs(r.height);
    }
    return r;
}

// Function to calculate the intersection of two rectangles
rectangle intersection(rectangle r1, rectangle r2) {
    rectangle r;

    // Calculate the rightmost left boundary
    r.x = max(r1.x, r2.x);

    // Calculate the highest bottom boundary
    r.y = max(r1.y, r2.y);

    // Calculate the width of the overlapping region
    int rightmost_x = min(r1.x + r1.width, r2.x + r2.width);
    r.width = max(0, rightmost_x - r.x);

    // Calculate the height of the overlapping region
    int highest_y = min(r1.y + r1.height, r2.y + r2.height);
    r.height = max(0, highest_y - r.y);

    return r;
}

// You should not need to modify any code below this line
void printRectangle(rectangle r) {
    r = canonicalize(r);
    if (r.width == 0 || r.height == 0) {
        printf("<empty>\n");
    } else {
        printf("(%d,%d) to (%d,%d)\n", r.x, r.y, r.x + r.width, r.y + r.height);
    }
}

int main(void) {
    rectangle r1 = {2, 3, 5, 6};
    rectangle r2 = {-1, -2, 5, 7};
    rectangle r3 = {-2, -3, 7, 10};
    rectangle r4 = {-4, 7, 4, 2};

    printf("r1 is ");
    printRectangle(r1);

    printf("r2 is ");
    printRectangle(r2);

    printf("r3 is ");
    printRectangle(r3);

    printf("r4 is ");
    printRectangle(r4);

    // Test everything with r1
    rectangle i = intersection(r1, r1);
    printf("intersection(r1,r1): ");
    printRectangle(i);

    i = intersection(r1, r2);
    printf("intersection(r1,r2): ");
    printRectangle(i);

    i = intersection(r1, r3);
    printf("intersection(r1,r3): ");
    printRectangle(i);

    i = intersection(r1, r4);
    printf("intersection(r1,r4): ");
    printRectangle(i);

    // Test everything with r2
    i = intersection(r2, r1);
    printf("intersection(r2,r1): ");
    printRectangle(i);

    i = intersection(r2, r2);
    printf("intersection(r2,r2): ");
    printRectangle(i);

    i = intersection(r2, r3);
    printf("intersection(r2,r3): ");
    printRectangle(i);

    i = intersection(r2, r4);
    printf("intersection(r2,r4): ");
    printRectangle(i);

    // Test everything with r3
    i = intersection(r3, r1);
    printf("intersection(r3,r1): ");
    printRectangle(i);

    i = intersection(r3, r2);
    printf("intersection(r3,r2): ");
    printRectangle(i);

    i = intersection(r3, r3);
    printf("intersection(r3,r3): ");
    printRectangle(i);

    i = intersection(r3, r4);
    printf("intersection(r3,r4): ");
    printRectangle(i);

    // Test everything with r4
    i = intersection(r4, r1);
    printf("intersection(r4,r1): ");
    printRectangle(i);

    i = intersection(r4, r2);
    printf("intersection(r4,r2): ");
    printRectangle(i);

    i = intersection(r4, r3);
    printf("intersection(r4,r3): ");
    printRectangle(i);

    i = intersection(r4, r4);
    printf("intersection(r4,r4): ");
    printRectangle(i);

    return EXIT_SUCCESS;
}
