#include <iostream>
#include <string>
using namespace std;

class SavingAccount
{
    int acc_no;
    string acc_name;
    float balance;
    float interest_rate;

    // Nested class
    class AccountDetails
    {
    public:
        void displayDetails(int no, string name, float bal, float rate)
        {
            cout << "\n----- Saving Account Details -----\n";
            cout << "Account Number : " << no << endl;
            cout << "Account Name   : " << name << endl;
            cout << "Balance        : " << bal << endl;
            cout << "Interest Rate  : " << rate << "%" << endl;
        }
    };

public:

    void inputdata()
    {
        cout << "Enter Account Number: ";
        cin >> acc_no;

        cout << "Enter Account Holder Name: ";
        cin >> acc_name;

        cout << "Enter Balance: ";
        cin >> balance;

        cout << "Enter Interest Rate (%): ";
        cin >> interest_rate;
    }

    void deposit()
    {
        float amount;

        cout << "\nEnter amount to deposit: ";
        cin >> amount;

        balance = balance + amount;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw()
    {
        float amount;

        cout << "\nEnter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else
        {
             cout << "Insufficient balance.\n";
        }
    }

    void calculateInterest()
    {
        float interest;

        interest = (balance * interest_rate) / 100;
        balance = balance + interest;

        cout << "Interest added: " << interest << endl;
    }

    void display()
    {
        AccountDetails d;       // Object of nested class
        d.displayDetails(acc_no, acc_name, balance, interest_rate);
    }
};

int main()
{
   SavingAccount s;       // Object of outer class

    s.inputdata();
    s.deposit();
    s.withdraw();
    s.calculateInterest();
    s.display();

    return 0;
}