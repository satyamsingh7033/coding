#include <iostream>
using namespace std;
int main(){
    int n , sum = 0;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 1; i <= n; i++){ // is condition se 1 to n number tak print hoga.
        if(i%3 == 0){ // is condition 1 to n number tak jitna bhi number divisible 3 hai wo print hoga.
            sum += i; 
        }
    }
    cout<<"Sum: "<<sum<<endl;
    return 0;
}