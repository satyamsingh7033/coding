#include <iostream>
using namespace std;                                     // DIAGRAM OF MULTILEVEL INHERITANCE:

// Base Class                                            // |*******|
class A {                                                // |___A___|
public:                                                  //     |
    void showA() {                                       //     |
        cout << "Satyam Kumar Singh"<<endl;              // |*******|
    }                                                    // |___B___|
};                                                       //     |
// A se B inherit                                        //     |
class B : public A {                                     // |*******|
public:                                                  // |___C___|
    void showB() {
        cout << "Satyam Singh Rajpoot"<<endl;
    }
};
// B se C inherit (Multilevel)
class C : public B {
public:
    void showC() {
        cout << "Suraj Rajpoot"<<endl;
    }
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
}
