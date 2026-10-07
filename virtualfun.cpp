#include<iostream>
using namespace std;
class Shape
{public:
    virtual void area()
    {
      cout<<"Area of shape"<<endl;
    }
};
class Square:public Shape
{ int l;
public:
 Square(int x)
 {
    l=x;
 }
 void area() override
 {
    cout<<"Area of square="<<l*l<<endl;
 }     
};
class Rectangle:public Shape
{
    int l,b;
  public: 
   Rectangle(int x,int y)
  {
    l=x;
    b=y;
  }
  void area() override{
    cout<<"Area of Rectangle="<<l*b<<endl;
  }     
};
class Circle:public Shape
{
    int r;
public:
 Circle(int x)
 {
    r=x;
 }
 void area() override
 {
    cout<<"Area of Circle="<<3.142*r*r<<endl;
 }
};
int main()
{
    Square s(5);
    Rectangle r(4,7);
    Circle c(2);
    s.area();
    r.area();
    c.area();

}
    
