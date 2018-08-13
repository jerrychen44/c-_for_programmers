// Goal: pracitce constructing vectors
// and their iterators
// Call the vector vFloat
// Call the iterator it


#include "main.hpp"

int main ()
{
  vector<int> vInts;
  vInts.assign(10, 5);
  printVector(vInts);
  assignFunction(vInts, 87);
  pushBackFunction(vInts, 2);
  emplaceFunction(vInts,1, 99);

  return 0;
}

