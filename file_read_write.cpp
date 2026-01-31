#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string data, data1, line;

    // Writing to file
    ofstream os("satyam.txt", ios::app);
    if (!os) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    cout << "\n\nWriting to a text file:\n" << endl;

    cout << "Please Enter your name: ";
    getline(cin, data);
    os << data << endl;

    cout << "Please Enter your Address: ";
    getline(cin, data1);
    os << data1 << endl;

    cout << "File Created Successfully\n";
    os.close();

    // Reading from file
    ifstream is("satyam.txt");
    if (!is) {
        cout << "Error reading file!" << endl;
        return 1;
    }

    cout << "\n\nReading Contents from the text file:\n" << endl;

    while (getline(is, line)) {
        cout << line << endl;
    }

    is.close();

    return 0;
}