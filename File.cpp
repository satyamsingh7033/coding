#include <iostream>
#include <fstream>
using namespace std;
int main(){
   int ro;
   string st ;
   int mr;

   std::ifstream name;
   name.open("simple1.txt");

   getline(name , st);

   cout<<st;

   return 0;
}