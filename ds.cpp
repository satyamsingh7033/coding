#include <iostream>
#include <string>
using namespace std;

class stud
{
public:
    string name;
    string rollno;
    string grade;
};

int main()
{
    int k = 0;
    stud st[3];

    while (k < 3)
    {
        cout << "Name: ";
        cin >> st[k].name;

        cout << "Roll number: ";
        cin >> st[k].rollno;

        cout << "Grade: ";
        cin >> st[k].grade;

        cout << "Press any key\n";
        k++;
    }

    cout << "\n Name \t Roll no.\t Grade \n";

    while (k > 0)
    {
        k--;
        cout << st[k].name << "\t" << st[k].rollno <<   "\t"  <<  st[k].grade << "\n";
    }

    return 0;
}