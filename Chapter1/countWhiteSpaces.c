#include <stdio.h>

int main() {
	int c = 0, nw = 0;

	while((c = getchar()) != EOF) {
		if (c == ' ')
			++nw;
		else if (c == '\b')
			++nw;
		else if (c == '\t')
			++nw;
		else if (c == '\n')
			++nw;
	}

	printf("%d\n", nw);
}