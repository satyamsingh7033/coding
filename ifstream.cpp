#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string st;
    ifstream nam;
    nam.open("simple1.txt");
    getline(nam , st);
    cout<<st;
    nam.close();

}