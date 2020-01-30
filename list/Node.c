#include "Node.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

Node_t node( int data ){

  static size_t sz = 0;
  Node_t n = malloc( sizeof( struct node ));
  n->data = &data;
  n->pos = sz++;
  n->link = NULL;
  assert( n != NULL );

  return n;
}

void link_nodes( Node_t h, Node_t n ){

	assert( h != NULL );
	Node_t tmp;
	tmp = h;
	while ( tmp != NULL ){
		tmp = tmp->link;
	}
	tmp->link = n;
}

void delete_list( Node_t head ){

	Node_t t, h = head;

	while( h != NULL ){
		t = h->link;
		fprintf( stderr, " Now Freeing address %p\n", h );
		free( h );
		h = t;
	}	
}
