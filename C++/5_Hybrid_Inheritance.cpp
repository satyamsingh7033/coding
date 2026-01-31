#include <iostream>
using namespace std;                                    // DIAGRAM OF HYBRID INHERITANCE:

// Base class                                           //                 |*****|                                      
class A {                                               //                 |__A__|
public:                                                 //                    |
    void showA() {                                      //                    |
        cout << "Satyam Kumar Singh"<<endl;             //        *************************
    }                                                   //        |                       |
};                                                      //        |                       |
// A se inherit                                         //     |*****|                 |*****|                           
class B : public A {                                    //     |__B__|                 |__C__|
public:                                                 //        |                       |
    void showB() {                                      //        |                       |
        cout << "Satyam Singh Rajpoot"<<endl;           //        ***********   ***********
    }                                                   //                  |   |
};                                                      //                  |   |
// A se hi inherit (Hierarchical)                       //                 |*****|
class C : public A {                                    //                 |__D__|
public:
    void showC() {
        cout << "Suraj Singh Rajpoot"<<endl;
    }
};

// Hybrid: B aur C dono se inherit
class D : public B, public C {
public:
    void showD() {
        cout << "Suraj Rajpoot"<<endl;
    }
};

int main() {
    D obj;
    obj.showB();
    obj.showC();
    obj.showD();
}
