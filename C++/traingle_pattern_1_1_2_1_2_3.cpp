#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= i+1; j++){
            cout<<j<<" "; //isme ham j ko hi print karaye ge.
        }
        cout<<endl;
    }
    return 0;
}

//OUTPUT:
// Enter the number: 4
// 1
// 1 2
// 1 2 3
// 1 2 3 4