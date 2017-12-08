#include <stdio.h>

/* If you don't wanna copy struct by a function but assgin the value of struct memnber directly, try struct pointer
 *
 *
 *
 * */


struct Ball {
    char color[10];
    double radius;
};

int main(void) {

    struct Ball ball = {"red", 4.0};
    struct Ball *ptr;
    ptr = &ball;

    printf("ball: %s\t%.2f\n", ptr->color, ptr->radius);

    return 0;
}
