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

    Number operator-(Number n2)
    {
        Number temp;
        temp.n = n - n2.n;
        return temp;
    }

    void display()
    {
        cout << "Result = " << n << endl;
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

    Number result = n1 - n2 - n3;

    result.display();

    return 0;
}