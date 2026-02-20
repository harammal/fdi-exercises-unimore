#include <stdbool.h>

// Funzione di supporto per verificare se un numero è primo

bool is_prime(unsigned int n) {
    if (n < 2)
        return false;
        
    for (unsigned int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    
    return true;
}

// Funzione che ritorna il prossimo numero primo maggiore di x

unsigned int prossimo_primo(unsigned int x) {
    unsigned int candidato = x + 1; // Partiamo dal numero successivo a x

    while (!is_prime(candidato)) {  // Cerchiamo finché non troviamo un numero primo
        candidato++;
    }
    
    return candidato;
}