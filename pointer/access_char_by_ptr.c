#include <stdio.h>

int main(void) {

    char *str[][2] = {
        "professor", "Justin",
        "teacher", "Momor", 
        "student", "Caterpillar"
    };

    for(int i = 0; i < 3; i++) {
        printf("%s: %s\n", str[i][0], str[i][1]);
    }

    // Check following case meaning in this program
    /*
     *  char *str1[] = {"professor", "Justin", "etc."};
        char str2[3][10] = {"professor", "Justin", "etc."};
     * */
    return 0;
}
