#include <iostream>
using namespace std;

class Complex {
public:
    int r, i;

    Complex(int a = 0, int b = 0) {
        r = a;
        i = b;
    }

    // Overload + operator
    Complex operator+(Complex c) {
        return Complex(r + c.r, i + c.i);
    }

    void display() {
        cout << r << " + i" << i << endl;
    }
};

int main() {
    int r1, i1, r2, i2;

    cout << "Enter real and imaginary of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary of second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex c3 = c1 + c2;

    cout << "Addition Result: ";
    c3.display();

    return 0;
}
