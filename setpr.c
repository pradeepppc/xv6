#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int 
main(int argc , char *argv[])
{
	if(argc < 3)
	{
	printf(2 , "Usage is setpr <pid> <priority>\n" );
	exit();
	}
	
	int pid = atoi(argv[1]);
	int priority = atoi(argv[2]);
	
	if( priority < 0 || priority > 100)
	{
	printf(2 , "Given invalid priority \n");
	exit();		
	}
	printf(1,"pid = %d , priority = %d \n" , pid , priority);	
	
	set_priority(pid , priority);
	exit();
	

}
