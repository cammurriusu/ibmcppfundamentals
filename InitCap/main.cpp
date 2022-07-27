#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    bool flag = false;

    cout << "Enter the String:" << endl;
    getline(cin, sentence, '\n');

    if (sentence[0] > 96 && sentence[0] < 123)
    {
        sentence[0] -= 32;
        flag = true;
    }

    for (int i = 1; i < sentence.length(); i++)
    {
        if (sentence[i-1] == 32)
        {
            if (sentence[i] > 96 && sentence[i] < 123)
            {
                sentence[i] -= 32;
                flag = true;
            }
        }
    }

    if (!flag)
    {
        cout << "First character in each word are already in uppercase";
    }
    else
    {
        cout << sentence;
    }
}
