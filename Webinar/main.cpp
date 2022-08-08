#include <iostream>
#include <string.h>
using namespace std;

struct DateOfBirth {
    int date, month, year;
};

struct Student {
    string name;
    int roll;
    DateOfBirth dob;
};

int main() {
    struct Student s;
    bool valid = false;
    int d = s.dob.date, m = s.dob.month, y = s.dob.year;

    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter Date of Birth [DD MM YY] format: ";
    cin >> d >> m >> y;

    if (s.roll > 0) {
        if ((d > 0 && d <= 31) && (m > 0 && m <= 12) && y > 0) {
            valid = true;
        } else {
            cout << "Invalid date";
        }
    } else {
        cout << "Invalid roll number";
    }

    if (valid) {
        cout << "Name : " << s.name << endl;
        cout << "RollNo : " << s.roll << endl;
        cout << "Date of birth : " << d << "/" << m << "/" << y;
    }
}
