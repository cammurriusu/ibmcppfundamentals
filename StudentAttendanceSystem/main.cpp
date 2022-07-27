#include <iostream>
using namespace std;

int main() {
    int students;
    string rollNumber;
    string name;
    string gender;
    string studentArray[9][3];
    cout << "Enter number of students\n";
    cin >> students;

    for (int i = 0; i < students; i++)
    {
        cout << "Enter roll number :";
        cin >> rollNumber;
        studentArray[i][0] = rollNumber;
        cout << "Enter name :";
        cin >> name;
        studentArray[i][1] = name;
        cout << "Enter gender :";
        cin >> gender;
        studentArray[i][2] = gender;
    }

    string find;
    cout << "Enter the roll number of student to view : ";
    cin >> find;

    for (int i = 0; i < students; i++)
    {
        if (find == studentArray[i][0])
        {
            cout << studentArray[i][1] << endl;
            cout << studentArray[i][2];
        }
    }
}