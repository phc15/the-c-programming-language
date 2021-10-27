#include <stdio.h>

#define maxlength 10
#define IN 1
#define OUT 0

main() {
	int c, nc, i, max, state;
	nc = i = max = 0;
	int wl[maxlength];

	state = OUT;
	while ((c = getchar()) != EOF && i < maxlength) {
		if (c != '\t' && c != ' ' && c != '\n') {
			state = IN;
			++nc;
		} else {
			state = OUT;
			if (nc != 0) {
				wl[i++] = nc;
				if (nc >= max)
					max = nc;
				nc = 0;
			}

		}

	}

	for (int j = max; j > 0; --j) {
		for (int k = 0; k < i; k++) {
			if (wl[k] < j) {
				printf(" ");
			} else {
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;

}
