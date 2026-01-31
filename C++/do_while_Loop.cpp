#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number: "; // do while loop me condiction false bhi ho ek kam ek bar hota hi hota hai.
    cin>>n; // do while pahle run hota hai phir kaam hota hai.
    int i = 1;
    do { 
        cout<<i<<" "; // ham do { ke ander ye sab likhatye hai.}
        i++;
    } while( i <= n);
    return 0;
}