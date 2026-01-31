#include <iostream>
using namespace std;
int main(){
char latter;
cout<<"Enter the latter: ";
cin>>latter;
int num = latter;
if(num >= 65 && num <= 90){
    cout<<latter<<" is uper case."<<endl;
} else if(num >= 97 && num <= 122){
    cout<<latter<<" is lower case."<<endl;
} else {
    cout<<"Not found."<<endl;
}
return 0;
}