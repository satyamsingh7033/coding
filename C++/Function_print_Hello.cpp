#include <iostream>
using namespace std;

// void me koi return type nhi hoya hai.
void printHello(){           // 1
    cout<<"Hello"<<endl;
    cout<<"-----"<<endl;
}

int name() {                // 2
    cout<<"Satyam Kumar Singh"<<endl;
    return 4;
}

int main() {
    printHello();

    int val = name();
    cout<<"val: "<<val<<endl;
    cout<<"------------------"<<endl;

    cout<< name() <<endl;  // 3

    return 0;
}