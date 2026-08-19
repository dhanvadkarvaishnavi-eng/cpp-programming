#include<iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int img;
    public:
    void input()
    {
        cin>>real;
        cin>>img;
    }
    void add(Complex c1,Complex c2)
    {
        real=c1.real+c2.real;
        img=c1.img+c2.img;
    }
    void sub(Complex c1,Complex c2)
    {
        real=c1.real-c2.real;
        img=c1.img-c2.img;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i";
    }
};
int main()
{
    Complex c1,c2,c3,c4;
    cout<<"Enter first complex number(real imaginary):";
    c1.input();
    cout<<"Enter second complex number(real imaginary):";
    c2.input();
    c3.add(c1,c2);
    c4.sub(c1,c2);
    cout<<"\nAddition=";
    c3.display();
    cout<<"\nSubstraction=";
    c4.display();
    return 0;
}
