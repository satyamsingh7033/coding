#include <iostream>
#include <fstream>
using namespace std;

class Student {
    int roll;
    char name[30];
    float mark1;
    float mark2;
    float mark3;


public:
    void input() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the Marks in Maths: ";
        cin >> mark1;
        cout << "Enter the Marks in Science: ";
        cin >> mark2;
        cout << "Enter the Marks in English: ";
        cin >> mark3;
        int t = mark1 + mark2 + mark3;
        float a = t/3;

        ofstream fout("simple1.txt", ios::app);
        fout << "ROLL    NAME    Maths   science   English   Total    Average" << endl;
        fout << "------------------------------------------------------------" << endl;

        fout << roll << "      " << name << "     " << mark1 << "      " << mark2 << "       " << mark3 << "        " << t << "        "  << a << "\n";
        fout.close();
    }

    void display() {
        string st;
        ifstream fin("simple1.txt"); // Correct file name

        

        
        // Read entire file line by line
        while (getline(fin, st)) {
            cout << st << endl;
        }

        fin.close();
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
