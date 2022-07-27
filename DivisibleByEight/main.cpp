#include <iostream>
using namespace std;

int main() {
    int numbers;
    cin >> numbers;

    string number = to_string(numbers);
    string lastDigits = "123";

    for (int i = 0; i < 3; i++)
    {
        lastDigits[i] = number[(number.length()-1)-2+i];
    }

    cout << "Last three digits : " << lastDigits << endl;

    if (numbers % 8 == 0)
    {
        cout << "Number is divisible by 8";
    }
    else
    {
        cout << "Number is not divisible by 8";
    }
}
