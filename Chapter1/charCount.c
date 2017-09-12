#include <stdio.h>

int main() {
	long nc;

	nc = 0;
	for (nc = 0; getchar() != EOF; ++nc) 
		; // for loop requires a body statement, so this is a null statement 
	printf("%ld\n", nc);

	return 0;
}