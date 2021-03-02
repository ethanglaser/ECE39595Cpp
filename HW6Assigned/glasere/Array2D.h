#ifndef ARRAY2D_H_
#define ARRAY2D_H_
#include <iostream>
#include <cstdlib>
#include <string>
class Array2D {

public:
   Array2D(int numR, int numC); 
   Array2D(int numR, int numC, int val); 
   Array2D(const Array2D& other);
   ~Array2D();

   virtual int& operator( )(int row, int col);
   virtual int operator( )(int row, int col) const;
   virtual int getNumRows();
   virtual int getNumCols();
   virtual Array2D& operator*(Array2D& other);
   virtual bool operator==(Array2D& other);
   virtual Array2D& operator=(Array2D& other);




private:
   Array2D(int numR, int numC, char differentiator);
   void deleteAry(int** ary);
   bool sameSize(Array2D& other) const;
   int numRows;
   int numCols;
   int** ary;
};
std::ostream& operator<<(std::ostream& os, Array2D& other);

#endif /* ARRAY2D_H_ */
