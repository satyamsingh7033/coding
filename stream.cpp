#include <iostream> 
#include <fstream>
using namespace std;
int main(){
    //file ko open karna
    ofstream out;
    out.open("file.txt");//create kar dena aur file open kar dega
    //write kar sakta hu 
    out<<"Satyam kumar singh";
    out.close();//Resource release kar paauon

}