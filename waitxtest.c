#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"

int main (int argc,char *argv[])
{

        int pid;
        int status = 1, a, b;
        pid = fork();
        if (pid == 0)
        {
                exec(argv[1], argv);
        	printf(1, "exec %s failed\n", argv[1]);
    	}
        else
        {
        status = waitx(&a, &b);
        }  
        printf(1, "Wait Time = %d Run Time = %d with Status %d \n", a, b, status);
        exit();
}

