#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> 
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
pid_t pid;
int     a=0;
if( (pid=fork() ) == -1)
{
perror("Error at fork");
//exit(1);
}

if (pid == 0)
{ /* child */
printf("Child process id=%d, with parent: id=%d\n",getpid(),getppid());
printf("Child process: after fork, variable a=%d\n", a);
a = 5;
printf("Child process: after modifying, variable a=%d\n", a);
}
else
{ /* parent */
printf("Parent process id=%d, with its parent: id=%d and child: id=%d\n",getpid(),getppid(),pid);
sleep(2);
printf("Parent process: variable a=%d\n", a);
}

/* the common code */
printf("Common code, executed by %s.\n", pid==0?"child":"parent");
return 0;
}
