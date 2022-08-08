#include <iostream>
using namespace std;

struct Product {
    string name;
    float price;
    int quantity;

    Product readItem() {
        struct Product p;

        cout << "Enter product name: ";
        cin >> p.name;
        cout << "Enter price: ";
        cin >> p.price;
        cout << "Enter quantity: ";
        cin >> p.quantity;

        return p;
    }
    void printItem() {
        if (price > 0 && quantity > 0) {
            float result = price * (float) quantity;
            cout << "Total Amount: " << result;
        } else {
            cout << "Invalid";
        }
    }
};


int main() {
    struct Product p;
    Product a = p.readItem();
    a.printItem();
}
