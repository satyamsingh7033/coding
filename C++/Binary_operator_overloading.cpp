#include <iostream>
using namespace std;
class Number {
    int real;
    public:
    Number (int r = 0){
        real = r;
    }
    Number operator ++(){
        Number temp;
        temp.real = ++real;
        return temp;
    }
    void display(){
        cout<<"Comple Sum: "<<real<<endl;
    }
};
int main(){
    Number c1(10);
    ++c1;
    c1.display();
    return 0;
}