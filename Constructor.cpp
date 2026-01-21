
#include <iostream>
using namespace std;

// class Student {
// public:
//     int roll;
//     string name;

//     Student(int r, string n) {
//         // Parameterized constructor
//         roll = r;
//         name = n;
//     }

//     void display() {
//         cout << roll << " " << name << endl;
//     }
// };

// int main() {
//     Student s1(101, "Krishna");  
//     s1.display();
// }

// 2. Copy Constructor Example

class Demo {
public:
    int x;

    Demo(int a) {
        x = a;
    }

    Demo(Demo &d) {
        // Copy constructor
        x = d.x;
    }
};

int main() {
    Demo d1(10);
    Demo d2 = d1;  // copy constructor call
}

