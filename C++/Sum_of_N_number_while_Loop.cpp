#include <iostream>
using namespace std;
int main(){
    int sum = 0; // starting sum always 0
    int i = 1;
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    while(i <= num){
        sum += i; // sum = i + sum;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}