#include <iostream>
using namespace std;

int* sortArray(int* ptr,int size)
{
    int temp;

    for (int i = 0; i < size-1; i++) {
        for (int j = i+1; j < size; j++) {
            if (*(ptr+i) > *(ptr+j)) {
                temp = *(ptr+j);

                *(ptr+j) = *(ptr+i);
                *(ptr+i) = temp;
            }
        }
    }

    return ptr;
}

int main()
{
    int size, element, array[100];

    cout << "Enter size of array" << endl;
    cin >> size;

    cout << "Enter the elements" << endl;
    for (int i = 0; i < size; i++) {
        cin >> element;
        array[i] = element;
    }

    int* ptr = array;
    int* result = sortArray(ptr, size);

    for (int i = 0; i < size; i++) {
        cout << *(result+i) << endl;
    }
}