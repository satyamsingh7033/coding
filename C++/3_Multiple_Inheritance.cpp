#include <iostream>
using namespace std;                                // DIAGRAM OF MULTIPLE INHERITANCE:

// First Parent                                     // |*****|              |*****|
class A {                                           // |__A__|              |__B__|
public:                                             //    |                    |
    void showA() {                                  //    |                    |
        cout << "Satyam Kumar Singh"<<endl;         //    |                    |
    }                                               //    *********   **********
};                                                  //            |   |
// Second Parent                                    //            |   |
class B {                                           //            |   |
public:                                             //           |*****|
    void showB() {                                  //           |__C__|
        cout << "Satyam Singh Rajpoot"<<endl;
    }
};

// Child inherits from A and B both
class C : public A, public B {
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
