#include <iostream>
using namespace std;
int main(){
    int sum = 0; // starting sum always 0
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i = 1; i <= num; i++){
        sum += i; // sum = i + sum;
    }
    cout<<sum<<endl;
    return 0;
}