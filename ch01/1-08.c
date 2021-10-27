#include <stdio.h>
main() {

	int nl, nb, nt;
	int c = 0;

	nl = nb = nt = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			nl++;
		}
		if (c == '\t') {
			nt++;
		}
		if (c == ' ') {
			nb++;
		}

	}

	printf("lines:  %d\t blanks: %d\t tabs: %d\n", nl, nb, nt);
}
