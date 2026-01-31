#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    long fact = 1;
    for(int i = 1; i <= n; i++){ // is condition se 1 to n number tak print hoga.
        fact *= i; // is condition se 1 to n number tak sab number apas me multiply ho jaye ga.
    }
    cout<<"Factorial: "<<fact<<endl;
    return 0;
}