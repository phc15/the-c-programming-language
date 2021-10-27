/*
 Write a program to print a histogram of the frequencies of different characters in its input.
 */

#include <stdio.h>

#define MAXLENGTH 256

main() {
	int c, nc, max;
	int ncharacter[MAXLENGTH];
	nc = max = 0;
	while ((c = getchar()) != EOF) {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			w[c - 'a']++;
		}
	}

	for (int i = 0; i < MAXLENGTH; i++) {
		max = 0;
		if (w[i] != 0 && w[i] > max) {
			max = w[i];
		}
	}

	for (int j = max; j > 0; --j) {
		for (int i = 0; i < MAXLENGTH; i++) {
			if (w[i] != 0 && w[i] <= max) {
				printf(" ");
			} else {
				printf("*");
			}
		}
	}

	/*for(int k = 0; k < MAXLENGTH; k++) {
	 if(w[k] != 0) {
	 printf("%c" , (char)k);
	 }
	 }*/
}

