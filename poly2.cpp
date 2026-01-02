#include <iostream>
using namespace std;

class Shape {
public:
    void area() {
        cout << "Area of Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area of Circle = π * r * r" << endl;
    }
};

int main() {
    Shape* s;
    Circle c;
    s = &c;
    s->area();
    return 0;
}
