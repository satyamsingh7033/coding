#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    //int num = 1;
    char ch = 'A';
    for(int i = 0; i < n; i++){ // ye outer loop hai to ye 1 to N number tak chale ga.
        for(int j = 0; j < i+1; j++){ // j < i+1.
            cout<<ch<<" "; // isme ham num ko hi print kare ge.
            ch++;
        }
        cout<<endl;
    }
    return 0;
}

// OUTOUT:
// Enter the number: 4
// A 
// B C
// D E F
// G H I J