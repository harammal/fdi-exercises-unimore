int isprime(unsigned int val) {
    // 0 e 1 non sono numeri primi
    if (val < 2)
        return 0;

    // Controlla i divisori fino alla radice quadrata di val
    for (unsigned int i = 2; i * i <= val; i++)
    {
        if (val % i == 0) // Se divisibile per i, non è primo
            return 0;
    }

    // Nessun divisore trovato, è primo
    return 1;
}