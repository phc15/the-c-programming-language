#include <stdio.h>
main() {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\');
			putchar('t');

		}
		if (c == ' ') {
			putchar('\\');
			putchar('b');
		}
		if (c == '\\') {
			putchar('\\');
			putchar('\\');
		}
		if (c != '\t' && c != '\b' && c != '\\') {
			putchar(c);
		}
	}
	return 0;
}
