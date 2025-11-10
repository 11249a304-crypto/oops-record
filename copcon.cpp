#include <iostream>
using namespace std;
// declare a class
class Wall {
private:
double length;
double height;
public:
// initialize variables with parameterized constructor
Wall(double len, double hgt)
: length(len)
, height(hgt) {
}
// copy constructor with a Wall object as parameter
Wall(const Wall&obj)
: length{obj.length}
, height{obj.height} {
}
double calculateArea() {
return length * height;
}
};
int main() {
// create an object of Wall class
Wall w1(10.5, 8.6);

// copy contents of wall1 to wall2
Wall w2 = w1;
// print areas of wall1 and wall2
cout << "Area of w1: " << w1.calculateArea() << endl;
cout << "Area of w2: " << w2.calculateArea();
return 0;
}




