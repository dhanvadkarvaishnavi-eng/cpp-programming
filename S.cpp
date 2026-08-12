#include<iostream>
#include<string>
using namespace std;
class Student
{
 private:
    string name;
    int Rollno;
    float per;
 private:
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
 public:
  void process()
  {
    input();
    display();
  }
};
int main()
{
    Student s;
    s.process();
    return 0;
}