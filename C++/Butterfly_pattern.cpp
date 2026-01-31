#include <iostream>
using namespace std; 

int main() {                                                  // OUTPUT:
    int n;
    cout << "Enter the number : ";                            //  Enter the number: 4
    cin >> n;                                                 //  *             *
    // Upper part                                             //  * *         * *
    for (int i = 1; i <= n; i++) {                            //  * * *     * * *
        for (int j = 1; j <= i; j++) {                        //  * * * * * * * *
            cout << "*";                                      //  * * * * * * * *
        }                                                     //  * * *     * * *
        for (int j = 1; j <= 2*(n-i); j++) {                  //  * *         * *
            cout << " ";                                      //  *             *
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    // Lower part
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2*(n-i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
