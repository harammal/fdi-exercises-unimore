unsigned int fattoriale(unsigned char val) {

	unsigned int fattoriale = 1;

	for (unsigned int i = 0; i < val; i++) {
		fattoriale *= (val - i);
	}
	return fattoriale;
}