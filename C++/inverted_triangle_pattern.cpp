#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 0; i < n; i++){ // ye outer loop hai to ye 1 to N number tak chale ga.
        for(int j = 0; j < i; j++){ // 
            cout<<" ";
        }
            for(int j = 0; j < n-i; j++){
                cout<<(i+1); // <<" " ye use kare ge to pyramid jese print hoga.
            }
            cout<<endl;
    }
    return 0;
}

// OUTOUT:
// How many take you lines: 4
// 1 1 1 1
//   2 2 2
//     3 3
//       4