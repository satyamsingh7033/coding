#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"How many take you lines: ";
    cin>>n;
    // ham "i = 0" se start kate or hamo n number tak print karna hai to 1 to n-1 hoga or ek baat ham kabhi (i<n) likhe ge
    for(int i = 1; i <= n; i++){ //outer loop.
        for(int j = 1; j <= n; j++){ // iner loop.
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// OUTOUT:
// How many take you lines: 4
// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4