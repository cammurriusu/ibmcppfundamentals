#include <iostream>
using namespace std;

int main()
{
    int annualIncome, daySalary;
    cout << "Enter annual income(in dollar)=";
    cin >> annualIncome;
    daySalary = annualIncome / 365;
    cout << "One day salary(in dollar)=" << daySalary;
}