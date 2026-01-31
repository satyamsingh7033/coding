#include <iostream>
using namespace std;
int fact(int n){
    long fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;  // fact = fact * i;
    }
    return fact;

}
int main(){

    cout<<"Sum of N number: "<<fact(5)<<endl;
    cout<<"Sum of N number: "<<fact(10)<<endl;
      
    return 0;
}