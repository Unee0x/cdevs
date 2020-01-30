#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void
change_value(int *x, int y){
  int **t = NULL;
  t = &x;
  **t = y;
}

int
main(int argc, char *argv[]){

	srand(time(NULL));

	int *n = NULL;
	
	if ( argc != 2 ){
		perror( "Usage ./change_value < some integer goes here >");
	}else {

		int t = atoi(argv[argc - 1]);

		n = &t;
	
		fprintf(stderr,"The value of n is %d\n", *n);

		int x = rand() % 20 + 0;

		change_value(n, x);

		fprintf(stderr, "The value of n has changed to %d\n", *n);

	}
	
	return 0;
}
