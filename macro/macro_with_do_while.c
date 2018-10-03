#define STMT( stuff )  do { stuff } while (0)

#define SWAP(x, y)     \
  STMT(                \
    typeof(x) tmp = x; \
    x = y;             \
    y = tmp;           \
  )

int main ()
{

    int x = 1, y = 2;

    printf("BEFORE: macro with do while x= %d, y= %d\n", x, y);
    SWAP(x,y);
    printf("AFTER: macro with do while x= %d, y= %d\n", x, y);


}
