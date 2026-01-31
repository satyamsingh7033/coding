#include <iostream>
using namespace std;
class complex {
    int real , imag;
    public:
    complex (int r = 0 , int i = 0){
        real = r;
        imag = i;
    }
    complex operator + (complex c){
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    complex operator - (complex c){
        complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
    complex operator * (complex c){
        complex temp;
        temp.real = real * c.real;
        temp.imag = imag * c.imag;
        return temp;
    }
    complex operator / (complex c){
        complex temp;
        temp.real = real / c.real;
        temp.imag = imag / c.imag;
        return temp;
    }
    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    void display1(){
        cout<<real<<" - "<<imag<<"i"<<endl;
    }
    void display2(){
        cout<<real<<" * "<<imag<<"i"<<endl;
    }
    void display3(){
        cout<<real<<" / "<<imag<<"i"<<endl;
    }
};
int main(){
    complex s1(30 , 20);
    complex s2(20 , 10);
    complex s3 = s1 + s2;
    complex s4 = s1 - s2;
    complex s5 = s1 * s2;
    complex s6 = s1 / s2;
    s3.display();
    s4.display1();
    s5.display2();
    s6.display3();
    return 0;
}
//OUTPUT:
// 50 + 30i
//  10 - 10i
// 600 * 200i
// 1 / 2i 