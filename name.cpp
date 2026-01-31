#include <iostream>
using namespace std;
class account{
    private:
    double balance;
    string password;
    public:
    string accountId;
    string username;
    void changeusername(string newusername){
        username = newusername;
        
    }
    //setter
    void setbalance(double b){
        balance = b;
    }
    //getter
    double getbalance(){
        return balance;
    }
};
int main(){
    account A1;
    A1.accountId = "satyamsingh8521";
    A1.username = "satyam_ssingh_";
    A1.setbalance(50000);
    cout<<A1.accountId<<endl;
    cout<<A1.username<<endl;
    cout<<A1.getbalance()<<endl;
    return 0;

}