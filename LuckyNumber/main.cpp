#include <iostream>
using namespace std;

int main() {
    char array[2][26] = {{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'},
                           {'1', '2', '3', '4', '5', '8', '3', '5', '1', '1', '2', '3', '4', '5', '7', '8', '1', '2', '3', '4', '6', '6', '6', '5', '1', '7'}};
    string name;
    string numbers;
    int result = 0;
    bool invalid = false;

    cout << "Enter your name:" << endl;
    cin >> name;

    for (char i : name)
    {
        if (i < 65 || i > 90 || i == 32)
        {
            invalid = true;
        }
    }

    numbers.resize(name.length());

    if (invalid)
    {
        cout << "Invalid name";
    }
    else
    {
        for (int i = 0; i < name.length(); i++)
        {
            for (int j = 0; j < 25; j++)
            {
                if (name[i] == array[0][j])
                {
                    numbers[i] = array[1][j];
                }
            }
        }

        for (char number : numbers)
        {
            result += (int) number - 48;
        }

        cout << result;
    }
}
