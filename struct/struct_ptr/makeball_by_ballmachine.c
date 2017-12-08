#include <stdio.h>

struct Ball {
    char color[10];
    double radius;
};

void ballmachine(struct Ball *ball);

int main(void) {

    struct Ball ball = {"red", 4.0};
    ballmachine(&ball);

    return 0;
}

void ballmachine(struct Ball *ball) {
     printf("ball: %s\t%.2f\n", ball->color, ball->radius);
}
