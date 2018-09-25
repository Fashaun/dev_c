//strerror
#include <string.h>
// FILE
#include <stdio.h>
// EXIT_SUCCESS
#include <stdlib.h>
// For errno variable
#include <errno.h>

int main(int argc, char *argv[])
{
    FILE *fout;
    int last_error = 0;
    if ((fout = fopen(argv[1], "w")) == NULL) {
        last_error = errno;
         /* reset errno and continue */
        errno = 0; 
    }
    /* do some processing and try opening the file differently, then */
    if (last_error) {
        fprintf(stderr, "fopen: Could not open %s for writing: %s\n",
                argv[1], strerror(last_error));
        fputs("Cross fingers and continue \n", stderr);
    }
    /* do some other processing */
    return EXIT_SUCCESS;
}
