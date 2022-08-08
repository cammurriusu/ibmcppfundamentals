#include <iostream>
using namespace std;

int countGift(int age) {
    if (age > 0) {
        if (age % 2 == 0) {
            return age * age * age;
        } else {
            return age * age;
        }
    } else {
        return -1;
    }
}

int main() {
    int age;

    cout << "Enter the age: ";
    cin >> age;
    cout << countGift(age);

    return 0;
}
