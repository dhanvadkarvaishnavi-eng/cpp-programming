#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of Shape" << endl;
    }
};

class Square : public Shape
{
    int s;

public:
    // Constructor
    Square(int x)
    {
        s = x;
    }

    void area()
    {
        cout << "Area of Square = " << s * s << endl;
    }
};

class Rectangle : public Shape
{
    int l, b;

public:
    // Constructor
    Rectangle(int x, int y)
    {
        l = x;
        b = y;
    }

    void area()
    {
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

class Circle : public Shape
{
    float r;

public:
    // Constructor
    Circle(float x)
    {
        r = x;
    }

    void area()
    {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

int main()
{
    int side, length, breadth;
    float radius;

    cout << "Enter side of square: ";
    cin >> side;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;

    cout << "Enter radius of circle: ";
    cin >> radius;

    Square s(side);
    Rectangle r(length, breadth);
    Circle c(radius);

    Shape *p;

    p = &s;
    p->area();

    p = &r;
    p->area();

    p = &c;
    p->area();

    return 0;
}