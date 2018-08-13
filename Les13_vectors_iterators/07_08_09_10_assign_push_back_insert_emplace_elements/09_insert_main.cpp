// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>


/*
!!! insert adds elements to the location "After" the iterator.


1.Set the iterator to one before the location where you would like to add an element.
2.Use insert to add the element.

*/

int main ()
{
  //creating a vector of integers
  std::vector<int> vectorInts;
  //creating an iterator for the vector
  std::vector<int>::iterator it;

  vectorInts.push_back(0);
  vectorInts.push_back(1);
  vectorInts.push_back(2);
  vectorInts.push_back(3);
  vectorInts.push_back(4);
  vectorInts.push_back(5);
  vectorInts.push_back(6);
  vectorInts.push_back(7);

  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

  //printing the contents of vectorInts
  std::cout<<"VectorInts has these elements:\n";
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

  ///////////////
  // Insesrt
  //////////////

  //insert an element after the first element
  //Before we insert, we need to set the iterator to a known destination.
  //In this case we set it to the beginning of the vector plus one.
  it  = vectorInts.begin() + 1;
  //To insert the element we need to give the insert location and the value of the element.
  //In this case the location is the location of the iterator (begin + 1). The value is -1.
  vectorInts.insert(it, -1);
  std::cout<<"\n\nAfter the insert\n";

  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
      std::cout<<*it<<" ";


//reset the iterator to the beginning of the vector before inserting the next value.
//You need to do this after an insert because all iterator locations are invalid after an insert.
// ex:   it  = vectorInts.begin();


  //insert an element after the third element
  it  = vectorInts.begin();
  vectorInts.insert(it + 3, -2);
  std::cout<<"\n\nAfter the insert\n";
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

  //insert an element after the third element
  it  = vectorInts.begin();
  vectorInts.insert(it + 5, -3);
  std::cout<<"\n\nAfter the insert\n";
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

  return 0;
}

