#include <stdbool.h>

extern bool check_parenthesis(const char* s);

int main(void) {

	bool b = check_parenthesis("(()((())))))((()())(()))");

	if (b) {
		return 1;
	}
	else
	{
		return 0;
	}
}