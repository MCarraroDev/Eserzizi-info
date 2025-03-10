/*
 * Programma per il calcolo del fattoriale di un numero
 * Input: un numero intero non negativo
 * Output: il fattoriale del numero inserito
 */

#include <iostream>
using namespace std;

int main() {
    // Dichiarazione delle variabili
    int num;                    // Numero di cui calcolare il fattoriale
    unsigned long long fatt = 1;    // Risultato del fattoriale (uso long long per numeri grandi)
    
    // Input del numero
    cout << "Inserisci un numero per calcolare il fattoriale: ";
    cin >> num;
    
    // Controllo validità dell'input
    if (num < 0) {
        cout << "Il fattoriale non è definito per numeri negativi!" << endl;
        return 1;
    }
    
    // Calcolo del fattoriale
    for(int i = 1; i <= num; i++) {
        fatt *= i;
    }
    
    // Output del risultato
    cout << "Il fattoriale di " << num << " è: " << fatt << endl;
    return 0;
}
