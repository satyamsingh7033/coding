#include <iostream>
#include <string>
using namespace std;

class Course
{
private:
    int courseID, Fees;
    string courseName;

public:
    // Default constructor
    Course()
    {
        courseID = 10;
        courseName = "BCA";
        Fees = 30000;
    }

    // Parameterized constructor
    Course(int c, string cn, int f)
    {
        courseID = c;
        courseName = cn;
        Fees = f;
    }

    void getCourse()
    {
        cout << "Course ID => " << courseID << endl;
        cout << "Course Name => " << courseName << endl;
        cout << "Fees => " << Fees << endl;
    }
};

int main()
{
    Course a;
    Course b(20, "B.Sc CS", 29000);

    cout << "\n\nCalling A Class = " << endl;
    a.getCourse();

    cout << "\nCalling B Class = " << endl;
    b.getCourse();

    return 0;
}