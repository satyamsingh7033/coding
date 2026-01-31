#include <iostream>
using namespace std;
int main(){
    int a = 10;

    int d = 10;

    int b = a++; // post-increment

    int c = ++d; // pre-increment

    cout<<"B: "<<b<<endl; // a++ pahle kaam hoga matlab pahle b me a ki purani value jaye gi.
    cout<<"A: "<<a<<endl; //phir update hoga a.

    cout<<"C: "<<c<<endl; // ++d isme pahle update hoga.
    cout<<"A: "<<d<<endl; // phir kaam hoga.
    return 0;

}