#include <stdio.h>

typedef struct {
    char color[10];
    double radius;
} Ball;

int main(void) {
    Ball ball1 = {"red", 5.0};

    Ball ball2 = ball1;  // the operator '=' will copy the struct member value
    ball1.radius = 10.0; // It will not change the member in ball2

    printf("ball1: %s,\t%.2f\n", ball1.color, ball1.radius);
    printf("ball2: %s,\t%.2f\n", ball2.color, ball2.radius);

    return 0;
}
