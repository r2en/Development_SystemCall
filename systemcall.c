/*
*	Test the xxxhal system call (#329)
*/
#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

/*
*	put my system call number
*/
#define SYS_xxxhal 329

int main(int argc,char **argv)
{
	if(argc <= 1){
		printf("Must provide a string to give to system call.\n");
		return -1;
	}
	char *arg = argv[1];
	printf("Masking system call with \"%s\".\n",arg);
	long res = syscall(SYS_xxxhal, arg);
	printf("System call returned %ld.\n",res);
	return res;
}
