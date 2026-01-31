#include <iostream>
#include <string>
using namespace std;

class electricity
{
protected:
    long int custno;
    string name;

public:
    void getdata()
    {
        cout << "\n\n Enter The Customer Number: ";
        cin >> custno;

        cin.ignore(); // To consume newline character after custno
        cout << "\n Enter The Name: ";
        getline(cin, name);
    }
};

class details
{
public:
    string add;
    int prev_read, curr_read, actual_read;

    void getdetails()
    {
        cout << "\n Enter The Address:  ";
        getline(cin, add);

        cout << "\n Enter The Previous Reading: ";
        cin >> prev_read;

        cout << "\n Enter The Current Reading: ";
        cin >> curr_read;
    }
};

class charge : public electricity, public details
{
    int ch;

public:
    void calc()
    {
        actual_read = curr_read - prev_read;

        if (actual_read <= 200)
            ch = actual_read * 1;
        else if (actual_read <= 400)
            ch = actual_read * 2;
        else if (actual_read <= 600)
            ch = actual_read * 3;
        else if (actual_read <= 800)
            ch = actual_read * 4;
        else
            ch = actual_read * 5;
    }

    void printdetails()
    {
        cout << "\n Customer Number: " << custno;
        cout << "\n Customer Name: " << name;
        cout << "\n Address: " << add;
        cout << "\n Previous Reading: " << prev_read;
        cout << "\n Current Reading: " << curr_read;
        cout << "\n Actual Reading: " << actual_read;
        cout << "\n Charges: " << ch;
    }
};

int main()
{
    charge c;

    cout << "\n\t Electricity Bill Calculation Using Multiple Inheritance";
    cout << "\n\t *******************************************************";
    cout << "\n\n Enter The Following Details";

    c.getdata();
    cin.ignore(); // clear buffer before getline in getdetails()
    c.getdetails();
    c.calc();
    c.printdetails();

    return 0;
}