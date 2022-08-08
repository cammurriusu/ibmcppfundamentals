#include <iostream>
using namespace std;

int divideNumbers(int num) {
    int a, b;
    a = num/10;
    b = num%10;

    return a/b;
}

int main() {
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    cout << divideNumbers(num);

    return 0;
}
