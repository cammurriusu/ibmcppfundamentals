#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char snn[11];
    char upperAlphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    bool valid;

    cout << "Enter the SSN number:\n";
    cin >> snn;

    int chars = strspn(snn, upperAlphabet);

    for (int i = 4; i < 7; i++)
    {
        if (snn[i] >= 48 && snn[i] <= 57)
        {
            valid = true;
        }
    }

    if (chars == 5 && (snn[9] >= 65 && snn[9] <= 90) && valid)
    {
        cout << "Valid SSN number";
    }
    else
    {
        cout << "Invalid SSN number";
    }
}