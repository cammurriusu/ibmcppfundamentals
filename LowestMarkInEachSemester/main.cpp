#include <iostream>
using namespace std;

int main() {
    int semesters, subjects;
    int marks[10][10];
    bool invalid = false;

    cout << "Enter number of semesters:\n";
    cin >> semesters;

    for (int i = 1; i <= semesters; i++)
    {
        cout << "Enter number of subjects in semester " << i << ":\n";
        cin >> subjects;
        cout << "Marks obtained in semester " << i << ":\n";

        for (int j = 0; j < subjects; j++)
        {
            cin >> marks[i-1][j];
        }

        for (int j = 0; j < subjects; j++)
        {
            if (marks[i-1][j] > 100)
            {
                invalid = true;
            }
        }
    }

    if (invalid)
    {
        cout << "You have entered invalid mark";
    }
    else
    {
        for (int i = 0; i < semesters; i++)
        {
            int minimumMark = 100;

            for (int j = 0; j < subjects; j++)
            {
                if (minimumMark > marks[i][j])
                {
                    minimumMark = marks[i][j];
                }
            }

            cout << "Minimum mark in semester " << i+1 << ":" << minimumMark << endl;
        }
    }
}
