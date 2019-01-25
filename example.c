#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main()
{
	int p1,p2;

	p1 = fork();
        if(p1 < 0)
        {
                printf(1 , "%d failed in fork!\n" , getpid());
        }
        else if(p1 > 0)
        {
                //parent process
                printf(1 , "Parent %d creating child %d \n" , getpid() , p1);
                wait();
        }
	else
	{

		p2  = fork();
		if(p2 < 0)
        	{
                	printf(1 , "%d failed in fork!\n" , getpid());
        	}
        	else if(p2 > 0)
        	{	
                	//parent process
                	printf(1 , "child %d creating another child %d \n" , getpid() , p1);
                	
        	}
				
		
		int j;
		long long int ppc=0;
		for(j = 0;j<100000000;j++)
		{
		ppc = ppc * 15 + 1251;
		if(getpid() % 3 == 0)
		{
		set_priority(getpid(),74);
		}
		}
		
		
	}

	
	return 0;


}
