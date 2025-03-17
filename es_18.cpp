// Dato un numero inserito da tastiera, calcolare la somma delle
// sue cifre.
// Es: n=1234 somma=10

#include <iostream>
using namespace std;

int main() {
    int n, somma = 0;
    cout << "Inserisci un numero: ";
    cin >> n;

    while (n != 0) {
        somma += n % 10;
        n /= 10;
    }

    cout << "La somma delle cifre è: " << somma << endl;
    return 0;
}
