#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
char pid{[}255{]};
fork();
fork();
fork();
sprintf(pid, "PID : %d\n",getpid());
write(STDOUT_FILENO, pid, strlen(pid));
exit(0);
}
