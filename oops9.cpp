// NAME : Parmeshwar Gupta, (191920), B.TECH (CSE) 4TH SEM

#include <iostream>
using namespace std;

class Rectangle {
   private:
    double length;
    double height;

   public:
   //constructor overloading passing no argument
   Rectangle() {
       length = 6.3;
       height = 2.5;
   }

    // parameterized constructor and for same there is two argument
    Rectangle(double len, double hgt) {
        length = 2.3;
        height = 4.5;
    }

    // copy constructor with a Wall object as parameter
    Rectangle(Rectangle &obj) {
        length = obj.length;
        height = obj.height;
    }
    double calculateArea() {
        return length * height;
    }
};

int main() {

    // create an object of rectangle class
    Rectangle rectangle1;

    // print area of rectangle1
    cout << "Area of Rectangle 1: " << rectangle1.calculateArea() << endl;

    // copy contents of rectangle1 to another object rectangle2
    Rectangle rectangle2 = rectangle1;

    // print area of rectangle2
    cout << "Area of Rectangle 2: " << rectangle2.calculateArea() << endl;

    return 0;
}
