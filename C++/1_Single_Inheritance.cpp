#include <iostream>
using namespace std;                                    // DIAGRAM OF SINGLE INHERITANCE:

// Parent Class                                         // |*******|
class A {                                               // |___A___|
public:                                                 //     |
    void showA() {                                      //     |
        cout << "Satyam Kumar Singh"<<endl;             //     |
    }                                                   // |*******|
};                                                      // |___B___|

// Child Class (Single Inheritance)
class B : public A {
public:
    void showB() {
        cout << "Suraj Rajpoot"<<endl;
    }
};

int main() {
    B obj;
    obj.showA(); // Parent ka function
    obj.showB(); // Child ka function
}
