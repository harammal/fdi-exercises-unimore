int main(void) {

	char str[] = "qui cambia la parola cambia";
	char vecchia[] = "cambia";
	char nuova[] = "sostituisci";

	char* sost = sostituisci(&str, &vecchia, &nuova);

	return 0;
}