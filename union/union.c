#include <stdio.h>

union StateMachine {
    char character;
    int number;
    char *str;
};

int main(void) {
    union StateMachine machine;

    machine.number = 1;
    printf("sizeof: %lu\n", sizeof(machine));
    printf("number: %d\n", machine.number);

    return 0;
}
