#include <iostream>
using namespace std;

int main() {
    float salary, appraisal;
    cout << "Enter the salary\n";
    cin >> salary;
    cout << "Enter the Performance appraisal rating\n";
    cin >> appraisal;

    if (salary <= 0)
    {
        cout << "Invalid Input";
    }
    else
    {
        if (appraisal >= 1 && appraisal <= 3)
        {
            salary *= 1.1;
            cout << salary;
        }
        else if (appraisal >= 3.1 /*Fixed using 3.09 instead*/ && appraisal <= 4)
        {
            salary *= 1.25;
            cout << salary;
        }
        else if (appraisal >= 4.1 /*Fixed using 4.09 instead*/  && appraisal <= 5)
        {
            salary *= 1.3;
            cout << salary;
        }
        else
        {
            cout << "Invalid Input";
        }
    }
}
