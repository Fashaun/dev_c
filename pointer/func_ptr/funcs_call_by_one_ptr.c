#include <stdio.h>
// memset
#include <string.h> 

// http://applezulab.netdpi.net/02-linux-proc/function-pointer-in-c

typedef struct _dev{
    char name[16];
    void (*open)();
} dev;

double init (dev *dev)
{
    memset(dev->name, 0, sizeof(dev->name));
    return 0.0;
}

int dev_a_open(void)
{
    printf("device a open\n");
    return 0;
}

int dev_b_open(void)
{
    printf("device b open\n");
    return 0;
}

int main(int argc, char *argv)
{

    dev dev_a, dev_b, *dev;

    init(&dev_a);
    init(&dev_b);

    dev = &dev_a;
    dev->open = dev_a_open;
    dev->open();

    dev = &dev_b;
    dev->open = dev_b_open;
    dev->open();

    return 0;
}
