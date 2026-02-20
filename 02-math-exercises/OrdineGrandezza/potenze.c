char max_pot10(unsigned int val) {

	unsigned i = -1;

	if (val == 0)
		return -1;
	else {
		while (val > 0) {
			val /= 10;
			i++;
		};
		return i;
	}
}