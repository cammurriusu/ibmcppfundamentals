#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;

    int a = (int) input[0] - 48;
    int b = (int) input[input.size()-1] - 48;

    cout << a*b;
}
