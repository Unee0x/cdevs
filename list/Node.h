#ifndef NODE_H
#define NODE_H

#include <stddef.h>

typedef struct node{
  void *data;
	size_t pos;
  struct node *link;
}*Node_t;

Node_t node( int  );
void link_nodes( Node_t h, Node_t n );
void delete_list( Node_t h );

#endif
