#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout<<ch<<" "; // yaha pe ham ch ko hi print kare ge.
            
        }
        cout<<endl;
        ch++; // isko ham hamesa loop ke bahar likhe ge.
    }
    return 0;
}

//OUTPUT:
// Enter the number: 4
// A
// B B
// C C C
// D D D D