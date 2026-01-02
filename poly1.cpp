#include <iostream>
using namespace std;

class Shape {
public:
    void area(int side) {
        cout << "Area of Square = " << side * side << endl;
    }

    void area(int length, int width) {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

int main() {
    Shape s;
    s.area(5);
    s.area(4, 6);
    return 0;
}
