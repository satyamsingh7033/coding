#include <iostream>
#include <string>
using namespace std;

class EMP
{
protected:
    long int Ecode;
    string Ename;

public:
    void get_employeedetails()
    {
        cout << "\n Employee Code : ";
        cin >> Ecode;

        cin.ignore(); // To consume the newline after Ecode
        cout << "\n Employee Name: ";
        getline(cin, Ename);
    }
};

class salary : public EMP
{
protected:
    float salary_amt;

public:
    void getsalary()
    {
        EMP::get_employeedetails();
        cout << "\n Employee Salary: ";
        cin >> salary_amt;
    }
};

class calempsalary : public salary
{
    float da, hra, gross, ta;

public:
    void calcsalary()
    {
        salary::getsalary();

        da = salary_amt * 2 / 100;
        ta = salary_amt * 0.5 / 100;
        hra = salary_amt * 1 / 100;
        gross = salary_amt + hra + da + ta;
    }

    void print_paydetails()
    {
        cout << "\n Employee Details: ";
        cout << "\n-----------------------------------\n";
        cout << " Employee Code : " << Ecode << "\n";
        cout << " Employee Name : " << Ename << "\n";
        cout << " Salary : " << salary_amt << "\n";
        cout << " House Rent Allow: " << hra << "\n";
        cout << " Dearness Allow : " << da << "\n";
        cout << " Transport Allowences: " << ta << "\n";
        cout << " Gross Salary : " << gross << "\n\n";
    }
};

int main()
{
    calempsalary e;

    cout << "     Employee Payslip Generation Using Multilevel Inheritance "<<endl;
    cout << "     ******************************************************** "<<endl;

    e.calcsalary();
    e.print_paydetails();

    return 0;
}