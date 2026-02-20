int ismultiple(int a, int b) {

	if (a % b == 0 || b % a == 0)
		return 1;
	else
		return 0;
}