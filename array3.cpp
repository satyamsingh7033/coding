#include <iostream>
using namespace std;

class student {
    string name;
    string dpt;
    int mark;

public:
    void input() {
        cout << "Enter your name: ";
        cin.ignore(); // clear input buffer
        getline(cin, name);
        cout << "Enter your dpt: ";
        cin >> dpt;
        cout << "Enter your Marks: ";
        cin >> mark;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Department: " << dpt << endl;
        cout << "Marks: " << mark << endl;
        cout << "---------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Kitne students ka data lena hai?: ";
    cin >> n;

    student s[n]; // n students ke liye array

    for(int i = 0; i < n; i++) {
        cout << "Student " << i+1 << " ka data:" << endl;
        s[i].input();
    }

    cout << "\n--- All Students Data ---\n";
    for(int i = 0; i < n; i++) {
        s[i].show();
    }

    return 0;
}