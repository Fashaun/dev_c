#include <stdio.h>
#include <stdlib.h>

typedef struct Ball {
    char *color;
    double radius;
    double (*volumn)(struct Ball *); // function pointer
} Ball;

// Calculate volume
double volumn(Ball *this) {
    double r = this->radius; // 模擬 this 指標 的行為
    return r * r * 3.14;
}

Ball *new_ball(char *color, double radius) {

    Ball *ball = (Ball*) malloc(sizeof(Ball));
    ball->volumn = volumn; // link to function declare
    ball->color = color;
    ball->radius = radius;
    return ball;
}

int main(void) {

    Ball *ball = new_ball("red", 5.0);
    printf("ball 實例的體積: %.2f\n", ball->volumn(ball));

    return 0;
}
