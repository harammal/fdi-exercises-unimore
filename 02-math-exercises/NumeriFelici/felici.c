int felice(unsigned int num) {

	if (num == 0)
		return 0;
	else {
		int somma = 0, cifra;

		while (num != 1 && num != 4) {

			while (num > 0) {
				cifra = num % 10;
				somma += cifra * cifra;

				num /= 10;
			};
			num = somma;
			somma = 0;
		};

		if (num == 4)
			return 0;
		else
			if (num == 1)
				return 1;
	}
}