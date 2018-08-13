// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<float> vIn);

 void printVector(vector<float> vFloat)
 {
  //creating an iterator for the vector
  std::vector<float>::iterator it;
    //printing the contents of vIns
    //TODO: Complete the function
  std::cout<<"VectorInts has these elements:\n";
  for (it = vFloat.begin(); it != vFloat.end(); ++it)
    std::cout<<*it<<" ";//Notice, we dereference the iterator to print out the value of the vector:

 }
