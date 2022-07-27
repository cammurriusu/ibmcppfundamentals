#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter the month:";
    cin >> month;
    if (month >= 3 && month <= 5)
    {
        cout << "Season:Spring";
    }
    else if (month >= 6 && month <= 8)
    {
        cout << "Season:Summer";
    }
    else if (month >= 9 && month <= 11)
    {
        cout << "Season:Autumn";
    }
    else if (month == 12 || month >=1 && month <= 2)
    {
        cout << "Season:Winter";
    }
    else
    {
        cout << "Invalid month";
    }
}
