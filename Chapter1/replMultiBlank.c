#include <stdio.h>

int main() {

	int ws = 0, c;

	while ((c = getchar()) != EOF) {
		if (ws == 1) {
			if (c != ' ') { 
				putchar(' ');
				putchar(c);
				ws = 0;
			}
		} else {
			if (c == ' ') {
				ws = 1;
			} else {
				putchar(c);
			}
		}
	}

	return 0;
}