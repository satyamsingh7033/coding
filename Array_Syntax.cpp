#include <iostream>
using namespace std;
class array {
    int marks[5] = {90 , 80 , 70 , 75 , 60};
    public:
    void display() {
        marks[4] = 99; // yese ham value change kar saktye hai but indexvalue dena pare ga jese yaha pe hai 4
        cout<<marks[0]<<endl; // yese indexvalue deke print kartye hai
        cout<<marks[1]<<endl;
        cout<<marks[2]<<endl;
        cout<<marks[3]<<endl;
        cout<<marks[4]<<endl;

    }
};
int main(){
    array a1;
    a1.display();
    return 0;
}