#include <iostream>
using namespace std;

int main() {
    int size, element;
    bool even;

    cout << "Enter the size of an array:" << endl;
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid array size";
    }
    else
    {
        cout << "Enter the array elements:" << endl;

        int array[99];

        for (int i = 0; i < size; i++)
        {
            cin >> element;
            array[i] = element;
        }
        for (int i = 0; i < size; i++)
        {
            if (array[i] % 2 == 0 && array[i] < 10)
            {
                cout << array[i];
                even = true;
            }
        }

        if (!even)
        {
            cout << "Single digit even number is not found in the array";
        }
    }
}