#include "Node.h"
#include <stdlib.h>

int main(){

	Node_t head = node( rand()%9 );

	for( int i = 0; i < 10; i++ ){

		link_nodes( head, node( rand()%9 ) );
	}
	
	return 0;
}
