#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 0; i < n; i++){ // ye outer loop hai to ye 1 to N number tak chale ga.
        for(int j = 0; j < n-i-1; j++){                  //  OUTUPT:
            cout<<"  ";                                  
        }                                                // Enter the number: 5
        for(int j = 1; j <= i+1; j++){                   //              1
            cout<<j<<" ";                                //           1  2  1
        }                                                //        1  2  3  2  1
        for(int j = i; j > 0; j--){                      //     1  2  3  4  3  2  1
            cout<<j<<" ";                                //  1  2  3  4  5  4  3  2  1 
        }
        cout<<endl;
    }
    return 0;
}