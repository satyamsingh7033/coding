#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        if(i%2 == 0){ // formula find the Even number.
            cout<<i<<".Even number"<<endl;
        } else if(i%2 != 0){ // formula find the Odd number.
            cout<<i<<".Odd number"<<endl;
        }
    }
    return 0;
}