#include <stdio.h>
#define COLUMNS 4

int main() {
	int c, counter;

	counter = 0;
	while ((c = getchar()) != EOF) {
		if (c != '\t') {
			putchar(c);
			counter++;
		}

		// counter reach maximum
		if (counter == COLUMNS)
			counter = 0;

		// if a tab is met
		if (c == '\t') {
			for (int i = 0; i < COLUMNS - (counter % COLUMNS); i++) {
				putchar(' ');
			}
			counter = 0;
		}

		if (c == '\n')
			counter = 0;
	}
}
