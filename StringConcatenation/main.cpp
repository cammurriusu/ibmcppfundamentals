#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string inmateName;
    string fatherName;

    bool invalidName = false;

    cout << "Inmate's name : ";
    getline(cin, inmateName, '\n');
    cout << "Inmate's father's name : ";
    getline(cin, fatherName, '\n');

    string concatenated = inmateName + " " + fatherName;

    for (char & i : concatenated)
    {
        if ((i < 65 || (i > 90 && i < 97) || i > 122) && i != 32)
        {
            invalidName = true;
        }
        else if (i > 96 && i < 123)
        {
            i -= 32;
        }
    }

    if (invalidName)
    {
        cout << "INVALID NAME";
    }
    else
    {
        cout << concatenated;
    }
}
