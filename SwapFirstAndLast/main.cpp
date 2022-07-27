#include <iostream>
using namespace std;

int main() {
    string string;
    char last;
    cin >> string;

    last = string[string.length()-1];

    string[string.length()-1] = string[0];
    string[0] = last;

    cout << string;
}
