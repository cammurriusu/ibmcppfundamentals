#include <iostream>
#include <string>
using namespace std;

int stringLength(char* str)
{
    int length = 0;

    while (*str != '\0')
    {
        str++;
        length++;
    }

    return length-1;
}

int main() {
    string str;
    char string[100];

    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        string[i] = str[i];
    }

    char *s = string;

    int result = stringLength(s);

    cout << result;
}
