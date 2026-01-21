#include <iostream>
using namespace std;

// // Class declaration
// class Student {
// public:
//     int roll;        // data member
//     string name;

//     void display() { // member function
//         cout << roll << " " << name << endl;
//     }
// };

// int main() {
//     Student s1;      // object creation
//     s1.roll = 101;   // assigning value
//     s1.name = "Krishna";

//     s1.display();    // function call
//     return 0;
// }

class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal { // inheritance 
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog d;
    d.eat();   // inherited function
    d.bark();  // own function
}
