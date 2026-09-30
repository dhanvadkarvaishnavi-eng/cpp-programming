#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    Number(int a = 0)
    {
        x = a;
    }

    Number operator+(Number n)
    {
        Number temp;
        temp.x = x + n.x;
        return temp;
    }

    void display()
    {
        cout << "Result = " << x << endl;
    }
};

int main()
{
    int a, b, c;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter third number: ";
    cin >> c;

    Number n1(a), n2(b), n3(c);

    Number result = n1 + n2 + n3;

    result.display();

    return 0;
}