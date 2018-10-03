#include <stdio.h>
#include <stdlib.h>

#define COMMAND_LEN    256
#define TUNNEL_SCRIPT "echo dddd"
int main ()
{

char command[COMMAND_LEN];
snprintf(command, COMMAND_LEN - 1, TUNNEL_SCRIPT " > /tmp/gglog");
command[COMMAND_LEN - 1] = '\0';
system(command);

}
