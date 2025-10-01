#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int k, i;
    double S;

    cout << "k = "; cin >> k;

    S = 0;
    i = k;
    while (i <= 15) {
        S += cos(1. * i) / (1 + pow(sin(1. * i), 2));
        i++;
    }
    cout << S << endl;

    S = 0;
    i = k;
    do {
        S += cos(1. * i) / (1 + pow(sin(1. * i), 2));
        i++;
    } while (i <= 15);
    cout << S << endl;

    S = 0;
    for (i = k; i <= 15; i++)
    {
        S += cos(1. * i) / (1 + pow(sin(1. * i), 2));
    }
    cout << S << endl;
    S = 0;
    for (i = 15; i >= k; i--)
    {
        S += cos(1. * i) / (1 + pow(sin(1. * i), 2));
    }
    cout << S << endl;

    return 0;
}
