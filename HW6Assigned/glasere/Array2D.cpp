#include <iostream>
#include <cstdlib>
#include <string>
#include "Array2D.H"

// The character parameter exists to give this a different signature than any of 
// the public constructors.
Array2D::Array2D(int numR, int numC, char differentiator) : numRows(numR), numCols(numC) {

   ary = new int*[numRows];
   for (int i = 0; i < numRows; i++) {
      ary[i] = new int[numCols];
      for (int j = 0; j < numCols; j++) {
            ary[i][j] = -1;
      }
   }
}

Array2D::Array2D(int numR, int numC) : Array2D(numR, numC, 'c') { 
   for (int i = 0; i < numRows; i++) {
      for (int j = 0; j < numCols; j++) {
         ary[i][j] = i;
      }
   }
}

Array2D::Array2D(int numR, int numC, int val) : Array2D(numR, numC, 'c') { 
   for (int i = 0; i < numRows; i++) {
      for (int j = 0; j < numCols; j++) {
         ary[i][j] = val;
      }
   }
}

int& Array2D::operator( )(int row, int col) {
   return ary[row][col];
}
      
int Array2D::operator( )(int row, int col) const {
   return ary[row][col];
}

bool Array2D::sameSize(Array2D& other) const {
   return (numRows == other.getNumRows( ) && numCols == other.getNumCols( ));
}

Array2D& Array2D::operator*(Array2D& other) {
   Array2D val(numRows, other.getNumCols(), 0);
   if (numCols != other.getNumRows()) {
      Array2D val2(numRows, numCols, -1);
      *this = val2;
      return *this;
   }
   else {
      for (int i = 0; i < numRows; i++){
         for (int j = 0; j < other.getNumCols(); j++){
            for (int k = 0; k < numCols; k++){
               val(i,j) += this->operator()(i, k) * other(k, j);
            }
         }
      }
      numCols = other.getNumCols();
      Array2D& valr = val;
      *this = valr;
      return *this;
   }
}

std::ostream& operator<<(std::ostream& os, Array2D& other) {
   for (int i = 0; i < other.getNumRows(); i++){
      for (int j = 0; j < other.getNumCols(); j++){
         os << std::to_string(other(i, j)) + " ";
      }
      os << std::endl;
   }
   return os;
}

Array2D& Array2D::operator=(Array2D& other) {
   deleteAry(ary);
   ary = new int*[other.getNumRows()];
   numCols = other.getNumCols();
   numRows = other.getNumRows();
   for (int i = 0; i < other.getNumRows(); i++){
      ary[i] = new int[other.getNumCols()];
      for (int j = 0; j < other.getNumCols(); j++) {
         ary[i][j] = other(i,j);
      }
   }
   return *this;
}

bool Array2D::operator==(Array2D& other) {
   if (this->sameSize(other) != true) {
      return false;
   }
   else {
      for (int i = 0; i < numRows; i++){
         for (int j = 0; j < numCols; j++){
            if (this->operator()(i,j) != other(i,j)) {
               return false;
            }
         }
      }
   }
   return true;
}

Array2D::Array2D(const Array2D& other) {
   ary = new int*[numRows];
   for (int i = 0; i < numRows; i++) {
      ary[i] = new int[numCols];
      for (int j = 0; j < numCols; j++) {
            ary[i][j] = other(i,j);
      }
   }
}

void Array2D::deleteAry(int** ary) {
   for (int i = 0; i < numRows; i++) {
      delete [ ] ary[i];
   }
   delete [ ] ary;
}

Array2D::~Array2D() {
   this->deleteAry(this->ary);
}

int Array2D::getNumRows() {
   return numRows;
}

int Array2D::getNumCols() {
   return numCols;
}
