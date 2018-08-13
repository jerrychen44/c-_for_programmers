// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>


/*
We use ::assign to add and define elements to the vector
We instantiate an iterator for the vector class:

*/



int main ()
{
  //creating a vector of integers
  std::vector<int> vectorInts;
  //creating an iterator for the vector
  std::vector<int>::iterator it;

  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

  std::cout<<"\n\nAdding four elements to the vector\n";
  //assigning the value 3 to 4 elements of the vector
  vectorInts.assign(4,3);
  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

  //printing the contents of vectorInts
  std::cout<<"VectorInts has these elements:\n";
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";//Notice, we dereference the iterator to print out the value of the vector:

  return 0;
}

