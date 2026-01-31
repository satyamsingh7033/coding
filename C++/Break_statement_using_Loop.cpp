#include <iostream>
using namespace std;
int main(){
    for(int i = 1; i <= 10; i++){ // is statement ke hisab se 10 number print hoga.
        cout<<i<<" ";
        if(i == 5){ // 5 tak print hoke ruk jaye ga.
            break; // key word in C++.
        }
        
    }
    return 0;
}
