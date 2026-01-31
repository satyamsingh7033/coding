#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"How many you take lines: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){ // isme ham "j < i+1;" hoga.
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//OUTPUT:
// How many you take lines: 4
// *
// * *
// * * *
// * * * *