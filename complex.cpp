#include<iostream>
using namespace std;
class Complex
{
 private:
 int real1,real2,real;
 int img1,img2,img;
 public:
 void input()
 {
    cout<<"Enter complex number1:";
    cin>>real1>>img1;
    cout<<"Enter complex number2:";
    cin>>real2>>img2;
 }
 void add()
 {
    real=real1+real2;
    img=img1+img2;
    cout<<"Addition of complex number="<<real<<"+"<<img<<"i"<<endl;
 }
 void sub()
 {
    real=real1-real2;
    img=img1-img2;
    cout<<"Substraction of complex number="<<real<<"+"<<img<<"i"<<endl;
 }
 
};
int main()
{
    Complex c1;
    c1.input();
    c1.add();
    c1.sub();
    return 0;
}