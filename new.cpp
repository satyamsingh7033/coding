#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
    int roll;
    string name;
    float physics, chemistry, math, english, hindi, total, percent;

public:
    void input() {
        cout << "\nEnter Roll No: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks in Physics, Chemistry, Math, English, Hindi: ";
        cin >> physics >> chemistry >> math >> english >> hindi;

        total = physics + chemistry + math + english + hindi;
        percent = total / 5.0;

        ofstream fout("students.txt", ios::app);
        if (!fout) {
            cout << "Error opening file!" << endl;
            return;
        }

        fout << roll << "\t" << name << "\t"
             << physics << "\t" << chemistry << "\t" << math << "\t"
             << english << "\t" << hindi << "\t"
             << total << "\t" << percent << "\n";
        fout.close();
    }

    void display() {
        ifstream fin("students.txt");
        if (!fin) {
            cout << "File not found!" << endl;
            return;
        }

        string line;
        cout << "\nROLL\tNAME\tPHY\tCHE\tMATH\tENG\tHIN\tTOTAL\tPERCENT\n";
        cout << "-------------------------------------------------------------------\n";
        while (getline(fin, line)) {
            cout << line << endl;
        }

        fin.close();
    }
};

int main() {
    Student s1, s2, s3, s4, s5;

    cout << "Enter details of Student 1:\n";
    s1.input();

    cout << "\nEnter details of Student 2:\n";
    s2.input();

    cout << "\nEnter details of Student 3:\n";
    s3.input();

    cout << "\nEnter details of Student 4:\n";
    s4.input();

    cout << "\nEnter details of Student 5:\n";
    s5.input();

    cout << "\n\nAll Student Records:\n";
    s1.display();

    return 0;
}
