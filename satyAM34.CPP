#include <iostream.h>
#include <fstream.h>
#include <conio.h>

class Student {
    int roll;
    char name[30];
    float marks;

public:
    void input() {
        cout << "Enter Roll No, Name & Marks: ";
        cin >> roll >> name >> marks;

        ofstream fout("file.txt", ios::app);
        if (!fout) {
            cout << "Error opening file!" << endl;
            return;
        }

        fout << roll << "\t" << name << "\t" << marks << "\n";
        fout.close();
    }

    void display() {
        ifstream fin("file.txt");
        if (!fin) {
            cout << "File not found!" << endl;
            return;
        }

        char ch;
        cout << "\nROLL\tNAME\tMARKS\n";
        cout << "-------------------------\n";

        while (fin.get(ch)) {
            cout << ch;
        }

        fin.close();
    }
};

void main() {
    clrscr();
    Student s;
    s.input();
    s.display();
    getch();
}
