#include <iostream>
using namespace std;

int main()
{
    char letter;
    cout << "Enter the letter\n";
    cin >> letter;
    if(122 >= int(letter) && int(letter) >= 65)
    {
        printf("%c-%i", letter, letter);
    }
    else
    {
        cout << "Invalid";
    }
}
