#include<iostream>
#include<string>
using namespace std;
class Employee{
 private:
    int id;
    string name;
    float salary;
    string department;
 public:
  void input(){
    cout<<"Enter Employee id:"<<endl;
    cin>>id;
    cout<<"Enter Employee name:"<<endl;
    cin>>name;
    cout<<"Enter salary of employee:"<<endl;
    cin>>salary;
    cout<<"Department of employee:"<<endl;
    cin>>department;}
  void display(){
    cout<<"Id:"<<id<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Salary:"<<salary<<endl;
    cout<<"Department:"<<department<<endl;
   }
};
int main()
{
    Employee e;
    e.input();
    e.display();
    return 0;
}