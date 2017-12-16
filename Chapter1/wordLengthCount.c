#include <stdio.h>

#define MAX_LENGTH 10

int main() {
	int c, inWord, length;
	length = inWord = 0;

	int counts[MAX_LENGTH];

	for (int i = 0; i < MAX_LENGTH; i++) 
		counts[i] = 0;
	

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (inWord == 1) 
				counts[length]++;
			length = 0;
			inWord = 0;
		}
		else if (inWord == 1)
			length++;
		else {
			inWord = 1; 
			length = 1;
		}
	}

	for (int i = 0; i < MAX_LENGTH; i++) {
		printf("word of length %d: %d\n", i, counts[i]);
	}

	return 0;

}
