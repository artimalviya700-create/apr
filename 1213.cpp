// #include <iostream>
// #include <string>
// using namespace std;

// class BankAccount {
// private:
//     string depositorName;
//     long accountNumber;
//     string accountType;
//     double balanceAmount;

// public:
//     // Constructor with four arguments, defaulting type to "Savings"
//     BankAccount(string name, long accNum, double balance, string type = "Savings") {
//         depositorName = name;
//         accountNumber = accNum;
//         balanceAmount = balance;
//         accountType = type;
//     }

//     // 1. To Input initial values (alternative to constructor)
//     void inputData() {
//         cout << "Enter Name: ";
//         cin.ignore();
//         getline(cin, depositorName);
//         cout << "Enter Account Number: ";
//         cin >> accountNumber;
//         cout << "Enter Account Type (Savings/Current): ";
//         cin >> accountType;
//         cout << "Enter Initial Balance: ";
//         cin >> balanceAmount;
//     }

//     // 2. To deposit an amount
//     void deposit(double amount) {
//         if (amount > 0) {
//             balanceAmount += amount;
//             cout << "Amount Deposited: " << amount << endl;
//         }
//     }

//     // 3. To withdraw an amount after checking the balance
//     void withdraw(double amount) {
//         if (amount > balanceAmount) {
//             cout << "Insufficient Balance! Cannot withdraw." << endl;
//         } else if (amount > 0) {
//             balanceAmount -= amount;
//             cout << "Amount Withdrawn: " << amount << endl;
//         }
//     }

//     // 4. To display name and balance
//     void display() {
//         cout << "\n--- Account Details ---" << endl;
//         cout << "Depositor Name: " << depositorName << endl;
//         cout << "Balance: " << balanceAmount << endl;
//     }
// };

// int main() {
//     // Creating account using constructor (Name, AccNum, Balance, Type)
//     BankAccount acc1("John Doe", 1001, 5000.0, "Savings");
    
//     acc1.deposit(1500.0);
//     acc1.withdraw(2000.0);
//     acc1.display(); // Displays Name and Balance

//     return 0;
// }
#include <iostream>
#include <string>
#include <cmath> // 

using namespace std;

// Base Class: account
class account {
protected:
    string customer_name;
    long long account_number;
    string account_type;
    double balance;

public:
    // a. Constructor for the base class
    account(string name, long long acc_num, string type, double initial_bal) {
        customer_name = name;
        account_number = acc_num;
        account_type = type;
        balance = initial_bal;
    }

    // b. Accept deposit amount and update balance
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit Successful! Current Balance: " << balance << endl;
        }
    }

    // c. Display the balance
    void display_balance() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Name: " << customer_name << endl;
        cout << "Account No: " << account_number << endl;
        cout << "Type: " << account_type << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

// Derived Class for Saving Account
class sav_acct : public account {
public:
    // Constructor calling base constructor
    sav_acct(string name, long long acc_num, double bal) 
        : account(name, acc_num, "Saving", bal) {}

    // d. Compute and deposit interest (Compound Interest)
    void compute_and_deposit_interest(double rate, int time) {
        double new_balance = balance * pow((1 + rate / 100), time);
        double interest = new_balance - balance;
        balance = new_balance;
        cout << "Interest of " << interest << " deposited." << endl;
    }

    // e. Permit withdrawal and update balance
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Successful! New Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance for withdrawal!" << endl;
        }
    }
};

// Derived Class for Current Account
class cur_acct : public account {
    const double min_bal = 1000.0; // Minimum balance limit
    const double service_charge = 100.0; // Penalty amount

public:
    // Constructor calling base constructor
    cur_acct(string name, long long acc_num, double bal) 
        : account(name, acc_num, "Current", bal) {}

    // f. Check for minimum balance and impose penalty
    void check_min_balance() {
        if (balance < min_bal) {
            balance -= service_charge;
            cout << "Warning: Balance below minimum level!" << endl;
            cout << "Service charge of " << service_charge << " imposed." << endl;
            cout << "Updated Balance: " << balance << endl;
        }
    }

    // e. Permit withdrawal and update balance
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Successful! New Balance: " << balance << endl;
            check_min_balance(); // Always check balance after withdrawal
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

int main() {
    // 1. Testing Saving Account
    cout << "--- SAVING ACCOUNT TEST ---" << endl;
    sav_acct s1("Rahul", 1001, 5000);
    s1.display_balance();
    s1.deposit(2000);
    s1.compute_and_deposit_interest(5, 1); // 5% Interest for 1 year
    s1.withdraw(1500);
    s1.display_balance();

    cout << "\n--------------------------\n" << endl;

    // 2. Testing Current Account
    cout << "--- CURRENT ACCOUNT TEST ---" << endl;
    cur_acct c1("Amit", 2001, 1500);
    c1.display_balance();
    c1.withdraw(800); // Balance will drop below 1000
    c1.display_balance();

    return 0;
}
