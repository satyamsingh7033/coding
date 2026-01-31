#include <iostream>
#include <cmath>
using namespace std;

class FuncOverload
{
public:
    float area(float a) // To compute area of square
    {
        return a * a;
    }

    float area(float l, float b) // To compute area of rectangle
    {
        return l * b;
    }

    float area(float s1, float s2, float s3) // To compute area of triangle
    {
        float s = (s1 + s2 + s3) / 2;
        return sqrt(s * (s - s1) * (s - s2) * (s - s3));
    }
};

int main()
{
    float s1, s2, s3;
    int choice;
    char ans;

    FuncOverload f;

    do
    {
        cout << "\nProgram demonstrates Function Overloaded...!!!" << endl;
        cout << "\n1. To find area of square" << endl;
        cout << "2. To find area of rectangle" << endl;
        cout << "3. To find the area of triangle" << endl;
        cout << "4. Exit\n" << endl;

        cout << "Enter your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the input for square: ";
            cin >> s1;
            cout << "Area of Square= " << f.area(s1) << endl;
            break;
        case 2:
            cout << "Enter the input for rectangle: ";
            cin >> s1 >> s2;
            cout << "Area of Rectangle= " << f.area(s1, s2) << endl;
            break;
        case 3:
            cout << "Enter the input for triangle: ";
            cin >> s1 >> s2 >> s3;
            cout << "Area of Triangle= " << f.area(s1, s2, s3) << endl;
            break;
        case 4:
            cout << "End of Program....." << endl;
            break;
        default:
            cout << "Invalid Choice....!!!" << endl;
        }

        if (choice != 4)
        {
            cout << "\nDo You Want To Continue [Y/N]: ";
            cin >> ans;
        }
        else
        {
            break;
        }

    } while (ans == 'y' || ans == 'Y');

    return 0;
}