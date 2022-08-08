#include <iostream>
using namespace std;

int findArrayElement(int* p, int element, int size) {
    for (int i = 0; i < size; i++) {
        if (*(p+i) == element) {
            return i;
        }
    }

    return -1;
}

int main() {
    int size, element, array[100];

    cout << "Enter the size of the array" << endl;
    cin >> size;
    cout << "Enter the elements" << endl;

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    cout << "Enter element to search:" << endl;
    cin >> element;

    int* p = array;
    cout << findArrayElement(p, element, size);
}
