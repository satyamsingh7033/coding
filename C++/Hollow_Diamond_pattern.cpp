#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number: ";                                // OUTPUT:
cin>>n;
for(int i = 0; i < n; i++){                               // Enter the number: 4
    // Spaces                                             //         *
    for(int j = 0; j < n-i-1; j++){                       //       *   *
        cout<< " ";                                       //     *       *
    }                                                     //   *           *
    cout<< "*";                                           //     *       *
    if(i != 0){                                           //       *   *
        // Spaces                                         //         *
        for(int j = 0; j < 2*i-1; j++){
            cout<< " ";
        }
        cout<< "*";
    }
    cout<<endl;
}
// Botton
for(int i = 0; i < n-1; i++){
    // Spaces
    for(int j = 0; j < i+1; j++){
        cout<< " ";
    }
    cout<< "*";
    if(i != n-2){
        // Spaces
        for(int j = 0; j < 2*(n-i)-5; j++){
            cout<< " ";
        }
        cout<< "*";
    }
    cout<<endl;
}
return 0;
}