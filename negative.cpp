#include <iostream>
using namespace std;

class Number
{
    int n;

public:
    Number(int x = 0)
    {
        n = x;
    }

    Number operator--()
    {
        --n;
        return Number(n);
    }

    void display()
    {
        cout << "Number = " << n << endl;
    }
};

int main()
{
    int y;

    cout << "Enter number: ";
    cin >> y;

    Number n1(y);

    cout << "Before decrement:" << endl;
    n1.display();

    --n1;

    cout << "After decrement:" << endl;
    n1.display();

    return 0;
}