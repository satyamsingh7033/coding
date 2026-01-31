#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    double roll;
    float marks;
};

int main()
{
    student s;
    cout << "____________________________" << endl;
    cout << "|____Enter Information_____|" << endl;
    cout << "|__________________________|" << endl;
    cout << "|                          |" << endl;
    cout << "|Enter name: ";
    cin >> s.name;
    cout << "|__________________________|" << endl;
    cout << "|                          |" << endl;
    cout << "|Enter roll number: ";
    cin >> s.roll;
    cout << "|__________________________|" << endl;
    cout << "|                          |" << endl;
    cout << "|Enter marks: ";
    cin >> s.marks;
    cout << "|__________________________|" << endl;
    cout << "|                          |" << endl;
    cout << "|__Displaying Information__|" << endl;
    cout << "|__________________________|" << endl;
    cout << "|                          |" << endl;
    cout << "|Name: " << s.name << endl;
    cout << "|__________________________|" << endl;
    cout << "|                          |" << endl;
    cout << "|Roll: " << s.roll << endl;
    cout << "|__________________________|" << endl;
    cout << "|                          |" << endl;
    cout << "|Marks: " << s.marks << endl;
    cout << "|__________________________|" << endl;

    return 0;
}