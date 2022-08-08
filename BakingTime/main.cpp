#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    struct Time start;
    struct Time end;

    int *sh = &start.hours, *sm = &start.minutes, *ss = &start.seconds;
    int *eh = &end.hours, *em = &end.minutes, *es = &end.seconds;
    int th, tm, ts;
    bool x = false, y = false, err1 = false, err = false;

    cout << "Enter start time [hh mm ss]:" << endl;
    cin >> *sh >> *sm >> *ss;

    if ((*ss < 0 || *ss > 59) || (*sm < 0 || *sm > 59) || (*sh < 0 || *sh > 24)) {
        cout << "Invalid Start Time";
        err1 = true;
    } else {
        cout << "Enter end time [hh mm ss]:" << endl;
        cin >> *eh >> *em >> *es;

        if ((*es < 0 || *es > 59) || (*em < 0 || *em > 59) || (*eh < 0 || *eh > 24)) {
            cout << "Invalid End Time";
            err1 = true;
        }
    }

    if ((*eh*60*60 + *em*60 + *es > *sh*60*60 + *sm*60 + *ss) && !err1) {
        if (*ss > *es) {
            ts = 60 + (*es - *ss);
            x = true;
        } else {
            ts = *es - *ss;
        }

        if (*sm > *em) {
            tm = 60 + (*em - *sm);
            if (x) {
                tm -= 1;
            }
            y = true;
        } else {
            tm = *em - *sm;
            if (x) {
                if (*em == *sm) {
                    tm = 59;
                    y = true;
                } else {
                    tm -= 1;
                }
            }
        }

        if (*sh > *eh) {
            cout << "Invalid End Time";
            err = true;
        } else {
            th = *eh - *sh;
            if (y) {
                th -= 1;
            }
        }
    } else {
        if (!err1) {
            cout << "Invalid End Time";
            err = true;
        }
    }

    if (!err && !err1) {
        cout << "TIME TAKEN: " << th << ":" << tm << ":" << ts;
    }

    return 0;
}
