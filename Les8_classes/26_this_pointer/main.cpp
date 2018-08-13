#include <iostream>

using namespace std;

class Shape {
   public:
      // Constructor definition
      Shape(int l = 2, int w = 2)
      {
         length = l;
         width = w;
      }

      double Area()
      {
         return length * width;
      }

      //Use 'this' to compare areas
      int compareWithThis(Shape shapeIn)
      {
         return this->Area() > shapeIn.Area();
      }

      //'this' is not necessary to compare shapes
      int compare(Shape shapeIn)
      {
         return Area() > shapeIn.Area();
      }


   private:
      int length;     // Length of a box
      int width;
};



/*

'this' returns its own address.
There are a few cases where 'this' might be necessary,
but often using it is considered a stylistic preference.
*/

int main(void)
{
   Shape sh1(4, 4);    // Declare shape1
   Shape sh2(9, 6);    // Declare shape2

   if(sh1.compare(sh2))
   {
      cout << "\nShape2 "<<sh2.Area()<<" is smaller than Shape1 "<<sh1.Area() <<endl;
   }
   else
   {
      cout << "\nShape2 "<<sh2.Area()<<" is equal to or larger than Shape1 "<<sh1.Area() <<endl;
   }

   if(sh1.compareWithThis(sh2)) {
      cout << "\nShape2 "<<sh2.Area()<<" is smaller than Shape1 "<<sh1.Area() <<endl;
   }
   else
   {
      cout << "Shape2 "<<sh2.Area()<<" is equal to or larger than Shape1 "<<sh1.Area() <<endl;
   }

   return 0;
}