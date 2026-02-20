unsigned char bit_n(unsigned int val, unsigned char n) {
	return (val >> n) & 1;
}