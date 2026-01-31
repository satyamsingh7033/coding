#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"How many take you lines: ";
    cin>>n;
    int num = 1; // ye hamesa loop le bahar likhe ge.
    for(int i = 1; i <= n; i++){
        
        for(int j = 1; j <= n; j++){
            cout<<num<<" ";
            num++; // ye number me 1 add kar dega.
            
        }
        cout<<endl;

    }
    return 0;
}

// OUTOUT:
// How many take you lines: 4
// 1 2 3 4 
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
