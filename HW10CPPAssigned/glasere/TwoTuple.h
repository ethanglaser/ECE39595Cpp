#ifndef TWOTUPLE_H_
#define TWOTUPLE_H_
#include <iostream>

template <typename T1, typename T2> class TwoTuple { 
private:
   T1 i1;
   T2 i2;
public:
   TwoTuple(const T1 val1, const T2 val2);
   bool operator<(const TwoTuple<T1, T2> tt) const;
   bool operator>(const TwoTuple<T1, T2> tt) const;
   bool operator==(const TwoTuple<T1, T2> tt) const;

   friend std::ostream& operator<<(std::ostream& os, const TwoTuple tuple) {
      os << "[" << tuple.i1 << ", " << tuple.i2 << "]";
      return os;
   }
};
#endif /* TWOTUPLE_H_ */
template <typename T1, typename T2> TwoTuple<T1, T2>::TwoTuple(T1 val1, T2 val2) : i1(val1), i2(val2) { }

template <typename T1, typename T2> bool TwoTuple<T1, T2>::operator< (const TwoTuple<T1, T2> tt) const {
   if (i1 < tt.i1 || (i1 == tt.i1 && i2 < tt.i2)) {
      return true;
   }
   return false;
}
template <typename T1, typename T2> bool TwoTuple<T1, T2>::operator> (const TwoTuple<T1, T2> tt) const {
   if (i1 > tt.i1 || (i1 == tt.i1 && i2 > tt.i2)) {
      return true;
   }
   return false;
}
template <typename T1, typename T2> bool TwoTuple<T1, T2>::operator==(const TwoTuple<T1, T2> tt) const {
   if (i1 == tt.i1 && i2 == tt.i2) {
      return true;
   }
   return false;
}
