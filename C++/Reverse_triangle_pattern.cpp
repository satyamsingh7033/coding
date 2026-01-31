#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int num = 1;
    for(int i = 0; i < n; i++){ // ye outer loop hai to ye 1 to N number tak chale ga.
        for(int j = i+1; j > 0; j--){ // ye reverse loop hai isme ulta value print hoga.
            cout<<j<<" "; //isme ham j ko hi print karaye ge.
        }
        cout<<endl;
    }
    return 0;
}