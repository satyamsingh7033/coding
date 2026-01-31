#include <iostream>
#include <string>
using namespace std;

class empinfo
{
    long int empno;
    string ename, department;

public:
    void accept()
    {
        cout << "\n Enter The Employee No: ";
        cin >> empno;

        cin.ignore(); // To consume the newline

        cout << "\n Enter Your Name: ";
        getline(cin, ename);

        cout << "\n Enter The Department: ";
        getline(cin, department);
    }

    void display()
    {
        cout << "\n Employee No :\t" << empno;
        cout << "\n Employee Name :\t" << ename;
        cout << "\n Department :\t" << department;
    }
};

class Employee : public empinfo
{
    long int phoneno, salary;

public:
    void getdata()
    {
        empinfo::accept(); // calling base class function

        cout << "\n Enter The Phone No: ";
        cin >> phoneno;

        cout << "\n Enter The Salary: ";
        cin >> salary;
    }

    void putdata()
    {
        empinfo::display();
        cout << "\n Phone No :\t" << phoneno;
        cout << "\n Basic Salary :\t" << salary;
    }
};

int main()
{
    Employee a;

    cout << " SINGLE INHERITANCE"<<endl;
    cout << " ******************"<<endl;
    cout << "\n Enter The Following Information\n";

    a.getdata();

    cout << "\n-------------------------------------";

    a.putdata();

    return 0;
}