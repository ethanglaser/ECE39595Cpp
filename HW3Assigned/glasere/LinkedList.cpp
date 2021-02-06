#include "Node.h"
#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList( ) : head(nullptr) {}

LinkedList::~LinkedList( ) {
   delete head;
   std::cout << "LinkedList" << std::endl;
}
   
void LinkedList::addNode(Node* n) {
   n->setNext(head);
   head = n;
}

void LinkedList::print( ) {
   if (head != nullptr) {
      head->print( );
   }
}
