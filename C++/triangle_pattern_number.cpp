#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout<<(i+1)<<" "; // ham (i+1) ko hi print karaye ge or ham chahe to j ko bhi print kara saktye but ye thora thik nhi rahe ga.
        }
        cout<<endl;
    }

    return 0;
}

//OUTPUT:
// Enter the number: 4
// 1
// 2 2
// 3 3 3
// 4 4 4 4