#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    int roll;
    float gpa;

    void display() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Roll No: " << roll << endl;
    cout << "GPA: " << gpa << endl;
};
};

int main() {
    Student s;
    s.name = "Ali";
    s.age = 20;
    s.roll = 1;
    s.gpa = 3.4;
    s.display();
    return 0;
}

