#include<iostream>
#include<string>
using namespace std;
class Student:
{
  private:
    string name;
    int Rollno;
    float per;
  public:
  void input(){
    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<<"Enter your roll number:"<<endl;
    cin>>Rollno;
    cout<<"Enter your percentage:"<<endl;
    cin>>per;
  }
  void display()
  {
    cout<<"\n.........Student Details........\n";
    cout<<"Name:"<<name<<endl;
    cout<<"Roll Number:"<<Rollno<<endl;
    cout<<"Percentage:"<<per<<endl;
  }
}
int main()
{
    Student s;
    s.input();
    s.display();
    return 0;
}