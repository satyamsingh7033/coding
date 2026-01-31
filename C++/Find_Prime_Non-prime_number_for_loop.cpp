#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    bool isPrime = true; // is me prime number hai to ture rahe ga.
    // kabhi i = 2 se start hoga. yaha pe hai (i <= n - 1;) , (i*i <= n;) ye bhi likha saktye hai.
    // for (int i = 2; i*i <= n; i++) { 
    for (int i = 2; i <= n - 1; i++) { // kabhi bhi ham prime number check karege to ,, n - 1 ,, likhe ge.
        if (n % i == 0) { // formila hai prime number check karne ka.
            isPrime = false; // is me prime number false ho jaye ga to non-prime number ho jaye ga
            break;
        }
    }
    if (isPrime == true) { //ye condition hai.
        cout <<n<<" is a prime number" << endl; // prime number 1 or khud ke nunber se divisible hotye hai.
    } else {
        cout <<n<<" is a non-prime number" << endl; // non-prime number bhut sare nunber se divisible hotye hai.
    }

    return 0;
}
