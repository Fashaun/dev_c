#include <stdio.h>
#include <string.h>

struct Ball {
    char color[10];
    double radius;
}; // Becareful your comma

int main(void) {

    // You can Create struct and initiation at the same time
    struct Ball ball1 = {"red", 5.0};

    // You can also assign struct member after you declare the struct
    struct Ball ball2;
    strcpy(ball2.color, "green");
    ball2.radius = 10.0;

    printf("ball1: %s,\t%.2f\n", ball1.color, ball1.radius);
    printf("ball2: %s,\t%.2f\n", ball2.color, ball2.radius);

    return 0;
}
