#include <iostream> // Nested loop ka matlb hota hai ham loop le ander loop likh saktye hai
using namespace std;
int main(){
    int n;
    cout<<"How many lines you take: ";
    cin>>n; // ham kitna line lena chatye hai.
    // kabhi bhi ek bar ham " i " likh diye to dubra nhi likh saktye hai isliye ham dusra iterator " j " lenge.
        for(int i=0; i<=n; i++){ 
        int m = 5; // ham kitna star lena chatye hai.
        for(int j=1; j<=m; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}