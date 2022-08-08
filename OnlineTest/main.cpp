#include <iostream>
using namespace std;

struct Employee {
    string name;
    int scores[5];
};

int main() {
    Employee employee[10];
    int n, sum[4]{};

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> employee[i].name;
        for (int &score : employee[i].scores) {
            cin >> score;
            sum[i] += score;
        }
    }

    if (n == 1) {
        cout << "Only one person has taken up the test";
    } else {
        int max = sum[0];

        for (int i = 1; i < size(sum); i++) {
            if (sum[i] > max) {
                max = sum[i];
            }
        }

        cout << "The list of Employees who have scored highest marks" << endl;
        for (int i = 0; i < size(sum); i++) {
            if (sum[i] == max) {
                cout << employee[i].name << endl;
            }
        }
    }

    return 0;
}
