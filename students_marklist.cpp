#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class stud
{
public:
    char name[20];
    string rollno;
    string grade;
};

int main()
{
    int k = 0;
    stud st[3];

    while (k < 3)
    {
        cout << "--------------------------\n";
        cout << "| Name: ";
        cin >> st[k].name;
        cout << "| Roll Number: ";
        cin >> st[k].rollno;
        cout << "| Grade: ";
        cin >> st[k].grade;
        k++;
    }

    cout << "--------------------------\n\n";

    cout << left << setw(20) << "Name" 
         << setw(15) << "Roll No" 
         << setw(10) << "Grade" << "\n";
    cout << "-----------------------------------------\n";

    while (k > 0)
    {
        k--;
        cout << left << setw(20) << st[k].name
             << setw(15) << st[k].rollno
             << setw(10) << st[k].grade << "\n";
        cout << "-----------------------------------------\n";
    }

    return 0;
}
