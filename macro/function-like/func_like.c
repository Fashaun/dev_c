#ifdef DEBUG
# define LOGFILENAME "/tmp/logfile.log"
# define LOG(str) do { \ 
    FILE *fp = fopen(LOGFILENAME, "a"); \
    if (fp) { \
    fprintf(fp, "%s:%d %s\n", __FILE__, __LINE__, str ? str : "<null>"); \
    } \
    else { \
        perror("Opening '" LOGFILENAME "' failed"); \
    } \
} while (0)
#else
  /* Make it a NOOP if DEBUG is not defined. */
# define LOG(LINE) (void)0
#endif

#include <stdio.h>
int main(int argc, char* argv[])
{
    LOG("There are command line arguments");
    if (argc > 1) {
        printf("Write to log 1");
        LOG("There are command line arguments");
    }
    else {
        printf("Write to log 2");
        LOG("No command line arguments");
    }

    return 0;
}
