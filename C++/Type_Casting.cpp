#include <iostream>
using namespace std;
int main(){
    double price = 100.99;

    char grade = 'A'; // type casting me kabhi charater single cot me likhtye hai.
    int value = grade;
    cout<<value<<endl;

    int newprice = (int)price;
    cout<<newprice<<endl;
    
    return 0;
}