#include <iostream>
using namespace std;
class student {
    string name;
    string dpt;
    int mark;
public:
    void display(){
        cout<<"Enter your name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter your dpt: ";
        cin>>dpt;
        cout<<"Enter your Marks: ";
        cin>>mark;
    }
    void study(){
        for(int i = 0; i <=5 ; i++){
            cout<<"Name: "<<name<<endl;
            cout<<"Department: "<<dpt<<endl;
            cout<<"Marks: "<<mark<<endl;
        }
    }
};
    int main(){
        student s1;
        s1.display();
        s1.study();
        return 0;
        
        
}
