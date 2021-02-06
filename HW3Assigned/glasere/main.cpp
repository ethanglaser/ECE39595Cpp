#include <iostream>
#include "Node.h"
#include "LinkedList.h"

#define LEN 4
int main(int argc, char** args) {
   LinkedList* ll = new LinkedList( );
   for (int i = 0; i < 4; i++) {
      ll->addNode(new Node(i));
   }

   ll->print( );

   delete ll;
}
