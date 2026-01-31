#include <iostream>
using namespace std;
int main(){
    int mark;
    cout<<"Enter the mark: ";
    cin>>mark;
    if(mark >= 90 && mark <= 100){
        cout<<"O"<<endl;
    } else if(mark >= 80 && mark <= 89){
        cout<<"A+"<<endl;
    } else if(mark >= 70 && mark <= 79){
        cout<<"A"<<endl;
    } else if(mark >= 60 && mark <= 69){
        cout<<"B+"<<endl;
    } else if(mark >= 50 && mark <= 59){
        cout<<"B"<<endl;
    } else if(mark >= 40 && mark <= 49){
        cout<<"C"<<endl;
    } else if(mark >= 33 && mark <= 39){
        cout<<"P"<<endl;
    } else if(mark >= 1 && mark <= 32){
        cout<<"F"<<endl;
    } else {
        cout<<"Rong Mark."<<endl;
    }
    return 0;
}