#include <iostream>
using namespace std;

class Employee
{
public:
    // Manager bonus - 20%
    void calculateBonus(int salary)
    {
        cout << "Manager Bonus = " << salary * 0.20 << endl;
    }

    // Developer bonus - 10%
    void calculateBonus(float salary)
    {
        cout << "Developer Bonus = " << salary * 0.10 << endl;
    }
};

int main()
{
    Employee e;

    e.calculateBonus(50000);       // Manager
    e.calculateBonus(40000.0f);    // Developer

    return 0;
}