#include <iostream>
using namespace std;

// Default Constructor
class student {
public:
    int age;
    student() {
        age = 10;
    }
    void show() {
        cout << "age = " << age << endl;
    }
};

// Parameterized Constructor
class student1 : public student {
public:
    int age;

    student1() {    // Default constructor added
        age = 0;
    }

    student1(int a) {
        age = a;
    }

    void show1() {
        cout << "Age = " << age << endl;
    }
};

// Copy Constructor
class student2 : public student1 {
public:
    int age;

    student2() {}   // Default constructor added

    student2(int a) : student1(a) {   // Base class call added
        age = a;
    }

    student2(const student2 &obj) : student1(obj) {   // Base copy call added
        age = obj.age;
    }

    void show2() {
        cout << "Age = " << age << endl;
    }
};

// Dynamic Constructor
class student3 : public student2 {
public:
    int *p;

    student3(int x) : student2(x) {   // Base class call added
        p = new int(x);
    }

    void show3() {
        cout << "Value = " << *p << endl;
    }
};

int main() {
    student D1;
    D1.show();

    student1 p1(22);
    student1 p2 = p1;
    p1.show1();
    p2.show1();

    student2 c1(50);
    c1.show2();

    student3 t1(50);
    t1.show3();

    t1.show();
    t1.show1();
    t1.show2();
    t1.show3();

    return 0;
}
