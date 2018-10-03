#define PrintStr(var) printf(#var"=%s" , var)
struct Student{
    char name[20];
    int age;
};
int main (int argc, char ** argv) {
    struct Student mine = {"jack.ma", 20};
    PrintStr(mine.name);
    printf("\n\n");
    PrintStr("break.line\n");
    return 0;
}
