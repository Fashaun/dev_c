#define DEBUG
#ifdef DEBUG
#error "Debug Builds Not Supported"
// If the preprocessor encounters an #error directive, compilation is halted and the diagnostic message included is printed.
#endif
int main(void) {
    return 0;
}
