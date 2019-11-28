# include <stdio.h>
# include <stdlib.h>
#include <unistd.h>
int main()
{    
    int pid;
    pid=getpid();
    
    printf("Current Process ID is : %d\n",pid);

    printf("[ Forking Child Process ... ] \n");    
    pid=fork(); /* This will Create Child Process and
               Returns Child's PID */
if(pid < 0)
    {
        /* Process Creation Failed ... */


        exit(-1);
    }
    else if(pid==0) 
    {
        /* Child Process */


        printf("Child Process Started ...\n");
        printf("Child Process Completed ...\n");
        printf("I am In Zombie State ...\n");
    }
    else 
    {
        /* Parent Process */


        sleep(10);
        printf("Parent Process Running ... \n");
        
        while(1)
        {
            /* 
                Infinite Loop that Keeps the
                   Process Running
            */


        }
    }    
    return 0;
}
