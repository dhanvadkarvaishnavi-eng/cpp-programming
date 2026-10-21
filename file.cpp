
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream file1;
    string data;

    // Open file for writing
    file1.open("student.txt",ios::app);
    file1<< "\nabdmcvcb hchf ncj";
    cout<<"File created successfully";
    file1.close();

    // Open file for reading
    ifstream file2;
    file2.open("student.txt");

    while(getline(file2, data))
    {
        cout << data << endl;
    }

    file2.close();

    return 0;
}

//Welcome to cpp programming