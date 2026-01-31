#include <iostream>
using namespace std;

// Sum of 2 number.
int sum(int a , int b){   // parameter hai int a , int b.
    int s = a + b;
    return s;  // Ham jisko variable lenge usko hi return kare ge "s".
}

// Sum of 2 number.
double sum1(double x , double y){  // parameter hai double x , double y.
    double z = x + y;
    return z;  // Ham jisko variable lenge usko hi return kare ge "z".
}

// Minimum of 2 numbers.
int minimum(int p , int q){  // parameter hai int p , int q.
    if(p < q){
        return p;
    } else {
        return q;
    }
}

// Sum of 2 number.
int sum2(int A , int B){  // parameter hai int A , int B.
    return(A + B);
}

int main() {

    cout<<"Sum of a + b: "<<sum(10 , 5)<<endl;  // Arguments a = 10 , b = 5
    cout<<"----------------"<<endl;

    cout<<"Sum of x + y: "<<sum1(15 , 10)<<endl; // Arguments x = 15 , y = 10
    cout<<"----------------"<<endl;

    cout<<"Minimum value: "<<minimum(5 ,10)<<endl;    // Arguments p = 5 , q = 10
    cout<<"----------------"<<endl;

    cout<<"Sum of A + B: "<<sum2(20 ,25)<<endl;  // Arguments A = 5 , B = 10

    return 0;   
}