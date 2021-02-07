#include <iostream>
#include "Integer.h"
#include "Node.h"

Node::Node( ) : value(new Integer()), nextNode(nullptr) { }

Node::~Node( ) { 
   delete nextNode;
   delete value;
   std::cout << "Node" << std::endl;
}

Node::Node(int v) : value(new Integer(v)), nextNode(nullptr) {}

Node* Node::next( ) {
   return nextNode;
}

void Node::setNext(Node* n) {
   nextNode = n;
}

void Node::print( ) {
   if (value != nullptr) {
      value->print( );
   } 
   std::cout << std::endl;

   if (nextNode != nullptr) {
      nextNode->print( );
   }
}
