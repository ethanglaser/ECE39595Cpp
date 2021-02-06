#ifndef NODE_H_
#define NODE_H_
#include "Integer.h"
#include "Node.h"

class Node {
private:
   Node* nextNode;
   Integer* value;
public:
   Node( );
   ~Node( );
   Node(int v);
   virtual Node* next( );
   virtual void setNext(Node* n);
   virtual void print( );
};
#endif /* NODE_H_ */
