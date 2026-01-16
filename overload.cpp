#include <iostream>
using namespace std;

class Complex {
public:
    int r, i;

    Complex(int a, int b) {
        r = a;
        i = b;
    }

    void display() {
        cout << r << " + i" << i << endl;
    }
};

int main() {
    Complex c1(2, 3);
    c1.display();
    return 0;
}
