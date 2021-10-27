#include <stdio.h>
main() {

	int c;
	while (c = (getchar() != EOF)) {
		printf("%d", c);
		// c is an int, not a char, boolean of 0 or 1 assign to c
		putchar(c);

	}

	printf(" %d\n", getchar() != EOF);

}
