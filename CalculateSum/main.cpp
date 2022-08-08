#include <iostream>
using namespace std;

int calculateSum(int num) {
    int length = 0, result = 0, a, n = num;

    while (n != 0) {
        n /= 10;
        length++;
    }

    while (length != 0) {
        a = num % 10;
        num /= 10;

        result += a;
        length--;
    }

    return result;
}

int main() {
    int num;
    cout << "Enter the number:";
    cin >> num;
    cout << calculateSum(num);

    return 0;
}
