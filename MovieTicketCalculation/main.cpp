#include <iostream>
using namespace std;

int main() {
    int tickets;
    char refreshments, coupon, seat;
    bool err = false;
    double total = 0, bulk = 0, couponDiscount = 0, ticketPrice = 0;

    cout << "Enter the number of tickets [a minimum of 5 to a maximum of 40 tickets]:";
    cin >> tickets;
    if (tickets >= 5 && tickets <= 40)
    {
        cout << "Do you want refreshments?:";
        cin >> refreshments;

        cout << "Do you have a special coupon:";
        cin >> coupon;

        cout << "Enter type of seat [Classic / Premiere]:";
        cin >> seat;

        if (seat != 'c' && seat != 'p')
        {
            err = true;
            cout << "Invalid Input";
        }

        if (!err)
        {
            ticketPrice += (seat == 'c') ? tickets * 75 : 0;
            ticketPrice += (seat == 'p') ? tickets * 150 : 0;
            total += ticketPrice;

            bulk += (tickets > 20) ? ticketPrice * 0.1 : 0;
            total -= bulk;

            couponDiscount += (coupon == 'y') ? total * 0.02 : 0;
            total -= couponDiscount;

            total += (refreshments == 'y') ? tickets * 50 : 0;

            cout << total;
        }
    }
    else
    {
        cout << "Minimum of 5 and Maximum of 40 Tickets";
    }
}
