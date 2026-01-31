#include <iostream>
using namespace std;
class preIncrement{
    public:
    int value;
    preIncrement(int v){
        value = v;
    }
    void increment(){
        cout<<"pre-increment before incrementing: "<<value<<endl;
        ++value;
        cout<<"pre-increment after incrementing: "<<value<<endl;
    }
};
class postIncrement{
    public:
    int value;
    postIncrement(int v){
        value = v;
    }
    void increment(){
        cout<<"post-increment before incrementing: "<<value<<endl;
        value++;
        cout<<"pre-increment after incrementing: "<<value<<endl;
    }
};
int main(){
    preIncrement pre(5);
    postIncrement post(5);
    cout<<"--- preIncrement Example ---"<<endl;
    pre.increment();
    cout<<"--- postIncrement Example ---"<<endl;
    post.increment();
    return 0;
}