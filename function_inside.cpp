#include <iostream>
#include <string>
using namespace std;

class car
{
private:
    string car_name;
    int car_model;

public:
    void getdata()
    {
        cout << "---------------------------"<<endl;
        cout << "|Enter Car Name: ";
        cin >> car_name;

        cout << "|Enter Car Modelno: ";
        cin >> car_model;
        cout << "---------------------------"<<endl;
        
    }

    void showdata()
    {
        cout << "----------------------------------"<<endl;
        cout << "|Car Name is " << car_name<<endl;
        cout << "|Car Modelno is " << car_model<<endl;
        cout << "----------------------------------"<<endl;
    }
};

// main function start
int main()
{
    car cl;

    cl.getdata();
    cl.showdata();

    return 0;
}