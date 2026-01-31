#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    for(int i = 1; i <= num; i= i+2){
        cout<<i<<" ";
    }
    return 0;
}