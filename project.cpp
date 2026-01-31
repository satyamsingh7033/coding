#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

#define PASSWORD "satyamsingh8521"
#define USERNAME "satyamkumarsingh"

class Account {
    int acc_no;
    char name[50];
    float balance;

public:
    void create_account() {
        cout << "\n========== CREATE NEW ACCOUNT ==========\n";
        cout << "Enter Account Number      : ";
        cin >> acc_no;
        cin.ignore();
        cout << "Enter Account Holder Name : ";
        cin.getline(name, 50);
        cout << "Enter Initial Balance     : ₹";
        cin >> balance;
        cout << "\n✅ Account Created Successfully!\n";
    }

    void show_account() {
        cout << "\n----------------------------------------";
        cout << "\nAccount Number : " << acc_no;
        cout << "\nHolder Name    : " << name;
        cout << "\nBalance        : ₹" << balance;
        cout << "\n----------------------------------------";
    }

    void modify_account() {
        cin.ignore();
        cout << "\n========== MODIFY ACCOUNT ==========\n";
        cout << "Enter New Name         : ";
        cin.getline(name, 50);
        cout << "Enter New Balance (₹)  : ";
        cin >> balance;
        cout << "\n✅ Account Modified Successfully!\n";
    }

    void deposit(float amt) {
        balance += amt;
    }

    void withdraw(float amt) {
        if (amt > balance)
            cout << "\n❌ Insufficient Balance!\n";
        else {
            balance -= amt;
            cout << "\n✅ Withdrawal Successful!\n";
        }
    }

    int get_acc_no() { return acc_no; }
    float get_balance() { return balance; }

    void write_to_file();
    static void display_all();
    static void search_account(int);
    static void update_balance(int, float, bool);
    static void modify_account_in_file(int);
    static void delete_account(int);
};

// Save account
void Account::write_to_file() {
    ofstream outFile("bank.dat", ios::binary | ios::app);
    outFile.write(reinterpret_cast<char*>(this), sizeof(*this));
    outFile.close();
}

// Display all accounts
void Account::display_all() {
    Account ac;
    ifstream inFile("bank.dat", ios::binary);
    cout << "\n========== ALL ACCOUNTS ==========\n";
    while (inFile.read(reinterpret_cast<char*>(&ac), sizeof(ac))) {
        ac.show_account();
    }
    inFile.close();
}

// Search account
void Account::search_account(int n) {
    Account ac;
    bool found = false;
    ifstream inFile("bank.dat", ios::binary);
    while (inFile.read(reinterpret_cast<char*>(&ac), sizeof(ac))) {
        if (ac.get_acc_no() == n) {
            cout << "\n========== ACCOUNT FOUND ==========\n";
            ac.show_account();
            found = true;
            break;
        }
    }
    inFile.close();
    if (!found)
        cout << "\n❌ Account Not Found!\n";
}

// Update balance
void Account::update_balance(int n, float amt, bool is_deposit) {
    Account ac;
    fstream file("bank.dat", ios::binary | ios::in | ios::out);
    bool found = false;
    while (!file.eof()) {
        int pos = file.tellg();
        file.read(reinterpret_cast<char*>(&ac), sizeof(ac));
        if (ac.get_acc_no() == n) {
            if (is_deposit) {
                ac.deposit(amt);
                cout << "\n✅ Amount Deposited Successfully!\n";
            } else {
                ac.withdraw(amt);
            }
            file.seekp(pos);
            file.write(reinterpret_cast<char*>(&ac), sizeof(ac));
            found = true;
            break;
        }
    }
    file.close();
    if (!found)
        cout << "\n❌ Account Not Found!\n";
}

// Modify account
void Account::modify_account_in_file(int n) {
    Account ac;
    fstream file("bank.dat", ios::binary | ios::in | ios::out);
    bool found = false;
    while (!file.eof()) {
        int pos = file.tellg();
        file.read(reinterpret_cast<char*>(&ac), sizeof(ac));
        if (ac.get_acc_no() == n) {
            ac.show_account();
            ac.modify_account();
            file.seekp(pos);
            file.write(reinterpret_cast<char*>(&ac), sizeof(ac));
            found = true;
            break;
        }
    }
    file.close();
    if (!found)
        cout << "\n❌ Account Not Found!\n";
}

// Delete account
void Account::delete_account(int n) {
    Account ac;
    ifstream inFile("bank.dat", ios::binary);
    ofstream outFile("temp.dat", ios::binary);
    bool found = false;

    while (inFile.read(reinterpret_cast<char*>(&ac), sizeof(ac))) {
        if (ac.get_acc_no() != n)
            outFile.write(reinterpret_cast<char*>(&ac), sizeof(ac));
        else
            found = true;
    }

    inFile.close();
    outFile.close();
    remove("bank.dat");
    rename("temp.dat", "bank.dat");

    if (found)
        cout << "\n✅ Account Deleted Successfully!\n";
    else
        cout << "\n❌ Account Not Found!\n";
}

// Login
bool login() {
    string user, pass;
    cout << "========== LOGIN ==========\n";
    cout << "Enter Username : ";
    cin >> user;
    cout << "Enter Password : ";
    cin >> pass;
    if (user == USERNAME && pass == PASSWORD) {
        cout << "\n✅ Login Successful!\n";
        return true;
    } else {
        cout << "\n❌ Invalid Username or Password!\n";
        return false;
    }
}

// Main menu
int main() {
    if (!login()) return 0;

    int choice;
    do {
        cout << "\n\n💼 BANK MANAGEMENT MENU 💼";
        cout << "\n-------------------------------";
        cout << "\n1. Create New Account";
        cout << "\n2. View All Accounts";
        cout << "\n3. Search Account";
        cout << "\n4. Deposit Money";
        cout << "\n5. Withdraw Money";
        cout << "\n6. Modify Account";
        cout << "\n7. Delete Account";
        cout << "\n8. Logout / Exit";
        cout << "\n-------------------------------";
        cout << "\nEnter your choice: ";
        cin >> choice;

        Account ac;
        int acc;
        float amount;

        switch (choice) {
            case 1:
                ac.create_account();
                ac.write_to_file();
                break;
            case 2:
                Account::display_all();
                break;
            case 3:
                cout << "Enter Account Number to Search: ";
                cin >> acc;
                Account::search_account(acc);
                break;
            case 4:
                cout << "Enter Account Number: ";
                cin >> acc;
                cout << "Enter Amount to Deposit: ₹";
                cin >> amount;
                Account::update_balance(acc, amount, true);
                break;
            case 5:
                cout << "Enter Account Number: ";
                cin >> acc;
                cout << "Enter Amount to Withdraw: ₹";
                cin >> amount;
                Account::update_balance(acc, amount, false);
                break;
            case 6:
                cout << "Enter Account Number to Modify: ";
                cin >> acc;
                Account::modify_account_in_file(acc);
                break;
            case 7:
                cout << "Enter Account Number to Delete: ";
                cin >> acc;
                Account::delete_account(acc);
                break;
            case 8:
                cout << "\n👋 You have logged out. Thank you for using our system!\n";
                break;
            default:
                cout << "❌ Invalid Choice. Try again!\n";
        }

    } while (choice != 8);
}