#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int num = 1;
    for(int i = 0; i < n; i++){ // ye outer loop hai to ye 1 to N number tak chale ga.
        for(int j = 0; j < i+1; j++){ // j < i+1.
            cout<<num<<" "; // isme ham num ko hi print kare ge.
            num++;
        }
        cout<<endl;
    }
    return 0;
}

// OUTOUT:
// How many take you lines: 4
// 1 
// 2 3
// 4 5 6
// 7 8 9 10