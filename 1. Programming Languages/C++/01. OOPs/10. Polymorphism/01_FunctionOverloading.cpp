/*
                                         PolyMorphism
                                              ||
                                              ||
                                              ||
                          ____________________||________________________
                          |____________________________________________|
                          ||                                          ||
                          ||                                          ||
                          \/                                          \/
                     Compile Time                                  Run Time  
                     Polymorphism                                Polymorphism
                          ||                                          ||
                          ||                                          ||
                          ||                                          ||
          ________________||____________________                      \/
          |____________________________________|                    Virtual 
          ||                                  ||                   Functions
          ||                                  ||
          \/                                  \/
        Function                          Operator
        Overloading                      Overloading             
*/

#include <iostream>
using namespace std;

class Area
{
public:
    double calculateArea(int rad)
    {
        return 3.14159 * rad * rad;
    }

    int calculateArea(int length, int breadth)
    {
        return length * breadth;
    }
};

int main()
{
    Area obj;
    cout << "Area of circle: " << obj.calculateArea(5) << endl;
    cout << "Area of rectangle: " << obj.calculateArea(10, 5) << endl;

    /*
    Area of circle: 78.5397
    Area of rectangle: 50
    */
}