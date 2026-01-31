#include <iostream>
#include <string>
using namespace std;

class car
{
private:
    string car_number;
    string car_model;

public:
    void getdata();
    void showdata();
};

void car::getdata()
{
    cout << "\n\n Enter Car Number: ";
    cin >> car_number;

    cout << " Enter Car Model: ";
    cin >> car_model;
}

void car::showdata()
{
    cout << "\n Car Number is " << car_number;
    cout << "\n Car Model is " << car_model;
}

int main()
{
    car cl;

    cl.getdata();
    cl.showdata();

    return 0;
}