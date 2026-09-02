#include<iostream>
#include<string>
using namespace std;
class CheckingAccount
{
    int acc_no;
    string acc_name;
    float balance;
    
    class AccountDetail
    {
    public:
     void displaydetail(int no,string name,float bal)
     {
        cout<<"\n------Checking Account------"<<endl;
        cout<<"Account number:"<<no<<endl;
        cout<<"Account name:"<<name<<endl;
        cout<<"Balance:"<<bal<<endl;
     }
    };
public:
void inputdata()
{
    cout<<"Enter Account number:";
    cin>>acc_no;
    cout<<"Enter Account name:";
    cin>>acc_name;
    cout<<"Available Balance:";
    cin>>balance;
}
void deposit()
{
    float amount;
    cout<<"\nEnter amount to deposit:";
    cin>>amount;
    balance=balance+amount;
    cout<<"Amount Deposited successfully";
}
void withdraw()
{
    float amount;
    cout<<"\nEnter amount to withdraw:";
    cin>>amount;
    if (amount<=balance)
    {
        balance=balance-amount;
    cout<<"Amount withdrawn successfully";
    }
    else
    {
        cout<<"Insuficient balance";
    }
}
void display()
{
    AccountDetail d;
    d.displaydetail(acc_no,acc_name,balance);
}
};
int main()
{
    CheckingAccount c;
    c.inputdata();
    c.deposit();
    c.withdraw();
    c.display();
    return 0;
}