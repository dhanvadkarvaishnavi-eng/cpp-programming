#include <iostream>
using namespace std;

// Base class
class LibraryItem
{
protected:
    int itemID;
    string title;

public:
    void getData()
    {
        cout << "Enter Item ID: ";
        cin >> itemID;

        cout << "Enter Title: ";
        cin >> title;
    }

    void displayData()
    {
        cout << "\nItem ID: " << itemID;
        cout << "\nTitle: " << title;
    }
};

// Derived class 1
class Book : public LibraryItem
{
private:
    string author;

public:
    void getBook()
    {
        getData();

        cout << "Enter Author: ";
        cin >> author;
    }

    void displayBook()
    {
        cout << "\n--- Book Details ---";
        displayData();
        cout << "\nAuthor: " << author;
    }
};

// Derived class 2
class Magazine : public LibraryItem
{
private:
    int issueNo;

public:
    void getMagazine()
    {
        getData();

        cout << "Enter Issue No: ";
        cin >> issueNo;
    }

    void displayMagazine()
    {
        cout << "\n--- Magazine Details ---";
        displayData();
        cout << "\nIssue No: " << issueNo;
    }
};

int main()
{
    Book b;
    Magazine m;

    cout << "--- Enter Book Details ---\n";
    b.getBook();

    cout << "\n--- Enter Magazine Details ---\n";
    m.getMagazine();

    cout << "\n\n";
    b.displayBook();

    cout << "\n\n";
    m.displayMagazine();

    return 0;
}