/*
 * Programma per calcolare la media e trovare il massimo di una serie di numeri
 * Input: sequenza di numeri (fine con -1)
 * Output: media dei numeri e valore massimo
 */

#include <iostream>
using namespace std;

int main() {
    // Dichiarazione delle variabili
    int num;                // Numero corrente in input
    int count = 0;          // Contatore dei numeri inseriti
    int sum = 0;            // Somma dei numeri inseriti
    int max;                // Valore massimo
    bool first = true;      // Flag per il primo numero
    
    // Messaggio iniziale
    cout << "Inserisci numeri (inserisci -1 per terminare):" << endl;
    
    // Lettura e processamento dei numeri
    while(true) {
        cin >> num;
        
        // Controllo condizione di uscita
        if(num == -1) break;
        
        // Aggiornamento somma e contatore
        sum += num;
        count++;
        
        // Gestione del massimo
        if(first) {
            max = num;     // Il primo numero diventa il massimo
            first = false;
        } else if(num > max) {
            max = num;     // Aggiornamento del massimo
        }
    }
    
    // Output dei risultati
    if(count > 0) {
        float average = float(sum) / count;
        cout << "La media dei numeri inseriti è: " << average << endl;
        cout << "Il numero maggiore è: " << max << endl;
    } else {
        cout << "Nessun numero inserito!" << endl;
    }
    
    return 0;
}
