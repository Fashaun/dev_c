#include <stdio.h>

typedef struct {
    char color[10];
    double radius;
} Ball;

void foo(Ball);

int main(void) {
    Ball ball = {"red", 5.0};

    ballmachine(ball);
    printf("ball: %s,\t%.2f\n", ball.color, ball.radius); // Will not change the ball radius

    return 0;
}

void ballmachine(Ball ball) { // ball is a copy struct
     ball.radius = 100.0;
}
