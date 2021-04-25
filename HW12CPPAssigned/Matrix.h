#ifndef MATRIX_H_
#define MATRIX_H_
class Matrix {
private:
   double* data;
   int dim1Extent;
   int dim2Extent;
public:
   Matrix(int d1, int d2);
   double& operator( )(int r, int c) const;
   double& operator( )(int r, int c);
};
#endif /* MATRIX_H_ */
