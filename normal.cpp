#include <iostream>
using namespace std;

int main() {
    // Pre-increment example
    int a = 5;
    cout << "--- Pre-increment Example ---" << endl;
    cout << "Before incrementing: " << ++a << endl;
    cout << "After incrementing: " << a << endl;


    // Post-increment example
    int b = 5;
    cout << "--- Post-increment Example ---" << endl;
    cout << "Before incrementing: " << b++ << endl;
    cout << "After incrementing: " << b << endl;
    return 0;
}