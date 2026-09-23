#include <iostream>
using namespace std;

// Base class
class Student
{
protected:
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
class StudentExam : public Student
{
protected:
    int m1, m2, m3, m4, m5, m6;

public:
    void getMarks()
    {
        cout << "\nEnter marks of 6 subjects: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5 >> m6;
    }

    void displayMarks()
    {
        cout << "\nMarks: "
             << m1 << " " << m2 << " " << m3
             << " " << m4 << " " << m5 << " " << m6;
    }
};

// Derived class 2
class StudentResult : public StudentExam
{
public:
    void calculate()
    {
        float percentage;

        percentage = (m1 + m2 + m3 + m4 + m5 + m6) / 6.0;

        cout << "\nPercentage: " << percentage << "%";
    }
};

int main()
{
    StudentResult s;

    s.getData();
    s.getMarks();

    cout << "\n\n--- Student Result ---";
    s.displayData();
    s.displayMarks();
    s.calculate();

    return 0;
}