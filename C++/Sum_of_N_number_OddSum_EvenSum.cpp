#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int OddSum = 0;
    int EvenSum = 0;
    for(int i = 1; i <= n; i++){
        if(i%2 != 0){ // formula hai odd number find karne ka.
            OddSum += i; // is me pura odd number ka sum stored hoga.
        } else if(i%2 ==0){ // formula hai Even number find karne ka.
            EvenSum += i; // is me pura even number ka sum stored hoga.
        }
    }
    cout<<"Sum of Even number: "<<EvenSum<<endl;
    cout<<"Sum Of Odd number: "<<OddSum<<endl;
    return 0;
}