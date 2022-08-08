#include <iostream>
#include <bits/stdc++.h>
using namespace std;

float celsiustoFahrenheitConversion(float num) {
    float result = 9.0 / 5.0 * num + 32;

    return result;
}

int main() {
    float celsius;
    cin >> celsius;
    cout << celsiustoFahrenheitConversion(celsius);

    return 0;
}
