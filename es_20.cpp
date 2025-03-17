// Verificare se il numero inserito è palindromo
// Es: 12321 è palindromo
// Es: 12345 non è palindromo

#include <iostream>
using namespace std;

int main() {
    int n, originale, inverso = 0;
    cout << "Inserisci un numero: ";
    cin >> n;

    originale = n;
    while (n != 0) {
        inverso = inverso * 10 + n % 10;
        n /= 10;
    }

    if (originale == inverso) {
        cout << "Il numero è palindromo." << endl;
    } else {
        cout << "Il numero non è palindromo." << endl;
    }

    return 0;
}
