#include <iostream>
using namespace std;

int main () {
    string emailId;
    bool valid = false;
    int x, y;
    cin >> emailId;
    for (char i : emailId)
    {
        valid = !(i != '@' && i != '.');
    }

    if (valid)
    {
        for (int i = 0; i < emailId.length(); i++)
        {
            if (emailId[i] == '@')
            {
                x = i;
            }
            else if (emailId[i] == '.')
            {
                y = i;
            }
        }
        if (x < y)
        {
            cout << "Valid email Id";
        }
        else
        {
            cout << "Invalid email Id";
        }
    }
    else
    {
        cout << "Invalid email Id";
    }
}