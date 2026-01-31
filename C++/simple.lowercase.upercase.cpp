#include <iostream>
using namespace std;
int main(){
    char latter;
    cout<<"Enter the latter: ";
    cin>>latter;
    if(latter >= 'A' && latter <= 'Z'){
        cout<<latter<<" Uper case."<<endl;
    } else {
        cout<<latter<<" Lower case."<<endl;
    }
    return 0;
}