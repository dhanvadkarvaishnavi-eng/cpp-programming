#include<iostream>
using namespace std;
class Number
{
    int n;
public:
 Number(int x=0)
 {
    n=x;
 }
 Number operator++()
 {
    n++;
    return Number(n);
 }
 void display()
 {
    cout<<"Number="<<n<<endl;
 }
    
};
class Number1
{
    int n;
public:
 Number1(int x=0)
 {
    n=x;
 }
 Number1 operator--()
 {
    n--;
    return Number1(n);
 }
 void display()
 {
    cout<<"Number="<<n<<endl;
 }
};
int main(){
    int y;
    cout<<"Enter number:";
    cin>>y;
    Number n1(y);
    cout<<"Before increment:"<<endl;
    n1.display();
    ++n1;
    cout<<"After increment:"<<endl;
    n1.display();
    Number1 n2(y);
    cout<<"Before decrement:"<<endl;
    n2.display();
    --n2;
    cout<<"After decrement:"<<endl;
    n1.display();
    

    return 0;
    
}