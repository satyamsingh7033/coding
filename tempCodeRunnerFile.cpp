 #include <iostream>
 #include <fstream>
 using namespace std;
 int main(){
    string st1;
    ifstream out("simple1.txt");
    out>>st1;
    cout<<st1;
    return 0;
 }