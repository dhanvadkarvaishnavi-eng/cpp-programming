#include <iostream>
using namespace std;

class Product
{
    int product_id;
    int quantity;
    float price;

public:

    // 1. Default Constructor
    Product()
    {
        product_id = 0;
        quantity = 0;
        price = 0;
    }

    // 2. Parameterized Constructor
    Product(int id, int q, float p)
    {
        product_id = id;
        quantity = q;
        price = p;
    }

    // 3. Copy Constructor
    Product(const Product &p)
    {
        product_id = p.product_id;
        quantity = p.quantity;
        price = p.price;
    }

    // Calculate and display total cost
    void display()
    {
        float total_cost = quantity * price;

        cout << "\nProduct Information" << endl;
        cout << "Product ID : " << product_id << endl;
        cout << "Quantity   : " << quantity << endl;
        cout << "Price      : " << price << endl;
        cout << "Total Cost : " << total_cost << endl;
    }
};

int main()
{
    int id, quantity;
    float price;

    
    cout << "Enter Product ID: ";
    cin >> id;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Price: ";
    cin >> price;

    Product p(id, quantity, price);
    p.display();

    return 0;
}