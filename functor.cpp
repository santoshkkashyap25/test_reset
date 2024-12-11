
#include <iostream>


using namespace std;

class Add  // class that overloads the '()'' to add two integers
{
public:
    int operator ()(int a , int b)
    {
        return a+b;
    }
};

int main() {
  Add add; // functor are the objects that behave like the function

  cout<<add(3,4); // add here is object but used a function

}
