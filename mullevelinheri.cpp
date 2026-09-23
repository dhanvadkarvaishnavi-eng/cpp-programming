#include <iostream>
using namespace std;

// Base class
class Student
{
public:
    int roll;
    string name;

public:
    void getData()
    {
        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;
    }

    void displayData()
    {
        cout << "\nRoll No: " << roll;
        cout << "\nName: " << name;
    }
};

// Derived class 1
class StudentMarks: public Student
{
public:
    int marks[5] = {80, 75, 90, 85, 70};

public:
    void displayMarks()
    {
        cout << "\n\nMarks:";

        for(int i = 0; i < 5; i++)
        {
            cout << "\nSubject " << i + 1 << ": " << marks[i];
        }
    }
};

// Derived class 2
class StudentResult : public StudentMarks
{
public:
    void calculate()
    {
        int total = 0;

        for(int i = 0; i < 5; i++)
        {
            total = total + marks[i];
        }

        float percentage = total / 5.0;

        cout << "\n\nTotal Marks: " << total;
        cout << "\nPercentage: " << percentage << "%";
    }
};

int main()
{
    StudentResult s;

    s.getData();
    s.displayData();
    s.displayMarks();
    s.calculate();

    return 0;
}