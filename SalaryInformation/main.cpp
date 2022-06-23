#include <iostream>
using namespace std;

int main()
{
    int id, workingHrs, salaryHr, salaryMonth;
    cout << "Input the Employee ID: ";
    cin >> id;
    cout << "\nInput the working hrs: ";
    cin >> workingHrs;
    cout << "\nSalary amount/hr: ";
    cin >> salaryHr;
    salaryMonth = salaryHr * workingHrs;
    cout << "\nEmployee ID = " << id;
    cout << "\nSalary = " << salaryMonth;
}
