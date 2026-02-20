extern unsigned int inverti(unsigned int i) {

	int cifra, inverso = 0;

	while (i > 0) {
		cifra = i % 10;
		inverso = inverso * 10 + cifra;

		i /= 10;
	};

	return inverso;
}