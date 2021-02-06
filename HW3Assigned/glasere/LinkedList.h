#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
class LinkedList {
private:
   Node* head;
   
public:
   LinkedList( );
   ~LinkedList( );
   virtual void addNode(Node* n);
   virtual void print( );
};
#endif /* LINKEDLIST_H_ */
