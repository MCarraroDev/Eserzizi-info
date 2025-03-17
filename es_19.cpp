// Dato un numero da tastiera, trovare il numero al contrario
// Es: n=1234 inverso=4321

#include <iostream>
using namespace std;

int main() {
    int n, inverso = 0;
    cout << "Inserisci un numero: ";
    cin >> n;

    while (n != 0) {
        inverso = inverso * 10 + n % 10;
        n /= 10;
    }

    cout << "Il numero al contrario è: " << inverso << endl;
    return 0;
}
