/* Write a program to print a histogram of the frequencies of different characters in its input */

#include <stdio.h>

#define MAXDIGITS 10

main() {
	int c, i, nwhite, nother;
	int ndigit[MAXDIGITS];
	int nw
	nwhite = nother = 0;

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			++ndigits[c - '0'];
		} else if (c == ' ' || c == '\n' || c == '\t') {
			++nwhite;
		} else {
			++nother;
		}
	}

	for (int i = 0; i < 10; i++) {
		max = 0;
		if (ndigits[i] != 0 && ndigits[i] > max) {
			max = ndigits[i];
		}
	}

	if (max > nwhite)
		max = nwhite;
	if (max > nother)
		max = nother;

	for (int j = max; j > 0; --j) {
		for (int i = 0; i < MAXDIGITS; i++) {
			if (ndigits[i] < max) {
				printf(" ");
			} else {
				printf("*");
			}
		}
		printf("\n");
	}

	for (int k = max; k > 0; --k) {
		if (nwhite > max) {
			printf(" ");
		} else {
			printf("*");
		}
		nwhite--;
	}

	for (int k = 0; k < MAXLENGTH; k++) {
		if (w[k] != 0) {
			printf("%c", (char) k)
		}
	}
