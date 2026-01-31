#include <iostream>
using namespace std;                                   // DIAGRAM OF HIERARCHICAL INHERITANCE:

// Parent Class                                        //                   |*****|
class A {                                              //                   |__A__|
public:                                                //                    | | |
    void showA() {                                     //                    | | |
        cout << "Satyam Kumar Singh"<<endl;            //                    | | |
    }                                                  //      *************** | ***************
};                                                     //      |               |               |
// Child 1                                             //      |               |               |
class B : public A {                                   //      |               |               |                                
public:                                                //   |*****|         |*****|         |*****|
    void showB() {                                     //   |__B__|         |__C__|         |__D__|
        cout << "Satyam Singh Rajpoot"<<endl;
        cout << "--------------------"<<endl;
    }
};
// Child 2
class C : public A {
public:
    void showC() {
        cout << "Suraj Singh Rajpoot"<<endl;
        cout << "--------------------"<<endl;
    }
};
// Child 3
class D : public A {
public:
    void showD() {
        cout << "Durgesh Kumar singh"<<endl;
    }
};

int main() {
    B objB;
    C objC;
    D objD;

    objB.showA();
    objB.showB();

    objC.showA();
    objC.showC();

    objD.showA();
    objD.showD();
}
