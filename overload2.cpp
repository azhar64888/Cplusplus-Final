#include <iostream>
using namespace std;

class Complex {
public:
    int r, i;

    Complex(int a, int b) {
        r = a;
        i = b;
    }

    Complex operator-(Complex c) {
        return Complex(r - c.r, i - c.i);
    }

    void display() {
        cout << r << " + i" << i << endl;
    }
};

int main() {
    Complex c1(5, 6);
    Complex c2(2, 3);

    Complex c3 = c1 - c2;
    c3.display();

    return 0;
}
