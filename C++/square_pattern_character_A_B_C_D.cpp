#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"How many take you lines: ";
    cin>>n;
    for(int i = 0; i < n; i++){ //outer loop.
        char ch = 'A'; // bass A B C D print karne ke liye "char ch = 'A' ander likhe ge
        for(int j = 0; j < n; j++){ // inner loop.
            cout<<ch<<" ";
            ch++; // ye statement character ko add kate ga "A+1=B" yese hi loop chale ga 65 + 1 -> B.
            
        }
        cout<<endl;

    }
    return 0;
}

//OUTPUT:
// Enter the number: 4
// A B C D
// A B C D
// A B C D
// A B C D