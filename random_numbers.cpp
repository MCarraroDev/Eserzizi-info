/*
 * Programma per generare 10 numeri casuali e trovare il massimo e il minimo
 */

#include <iostream>
#include <cstdlib>  // Per rand() e srand()
#include <ctime>    // Per time()
using namespace std;

int main() {
    srand(time(0));
    
    const int QUANT_NUMERI = 10;
    int numeri[QUANT_NUMERI];
    int max, min;
    
    // Generazione e stampa dei numeri casuali
    cout << "Numeri generati: ";
    for(int i = 0; i < QUANT_NUMERI; i++) {
        numeri[i] = rand();
        cout << numeri[i] << " ";
    }
    cout << endl;
    
    // Trova massimo e minimo
    max = min = numeri[0];
    for(int i = 1; i < QUANT_NUMERI; i++) {
        if(numeri[i] > max) max = numeri[i];
        if(numeri[i] < min) min = numeri[i];
    }
    
    cout << "Il numero maggiore è: " << max << endl;
    cout << "Il numero minore è: " << min << endl;
    
    return 0;
}
