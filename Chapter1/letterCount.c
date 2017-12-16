#include <stdio.h>

int main() {
	int c;

	int letters[26];

	for (int i = 0; i < 26; i++) {
		letters[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c >= 'A' && c <= 'Z')
			letters[c - 'A'] += 1;
		else if (c >= 'a' && c <= 'z')
			letters[c - 'a'] += 1;
	}

	for (int i = 0; i < 26; i++) {
		printf("letter %c: %d\n", (char) (i + 'a'), letters[i]);
	}

	return 0;
}