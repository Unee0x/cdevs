#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

void print( int max )
{
	for( int i = 0; i < max; i++ )
		printf( "%d\n", i);
}

int main( void )
{

	pid_t pid = fork();
	switch(pid){
	case -1:
		perror( "PROCESS_CREATION_FAILED" );
		break;
	case 0:
		puts( "child process." );
		print( 150 );
		break;
	default:
		printf("Parent process with pid --> %d\n", getpid() );
		wait( NULL );
		printf( "Child has Finished!\n ");
	}
	
	return 0;
}
