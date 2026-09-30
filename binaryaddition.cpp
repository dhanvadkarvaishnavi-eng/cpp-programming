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

    Number operator+(Number n2)
    {
        Number n3;
        n3.n = n + n2.n;
        return n3;
    }

    void display()
    {
        cout << "Result = " << n << endl;
    }
};

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    Number n1(a), n2(b);

    Number n3 = n1 + n2;

    n3.display();

    return 0;
}