#ifndef INTEGER_H_
#define INTEGER_H_
class Integer {
private:
   int* value;
public:
   Integer( );
   ~Integer( );
   Integer(int v);
   virtual void setValue(int v);
   virtual int getValue( );
   virtual void print( );
};
#endif /* INTEGER_H_ */
