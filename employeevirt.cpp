#include <iostream>
using namespace std;

class Employee
{
protected:
    float salary;

public:
    Employee(float s)
    {
        salary = s;
    }

    virtual void calculateBonus()
    {
        cout << "Employee Bonus" << endl;
    }
};

class Manager : public Employee
{
public:
    Manager(float s) : Employee(s)
    {
    }

    void calculateBonus()
    {
        cout << "Manager Bonus = " << salary * 0.20 << endl;
    }
};

class Developer : public Employee
{
public:
    Developer(float s) : Employee(s)
    {
    }

    void calculateBonus()
    {
        cout << "Developer Bonus = " << salary * 0.10 << endl;
    }
};

int main()
{
    float ms, ds;

    cout << "Enter Manager salary: ";
    cin >> ms;

    cout << "Enter Developer salary: ";
    cin >> ds;

    Manager m(ms);
    Developer d(ds);

    Employee *p;

    p = &m;
    p->calculateBonus();

    p = &d;
    p->calculateBonus();

    return 0;
}