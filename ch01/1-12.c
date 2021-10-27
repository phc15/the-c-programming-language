#include <stdio.h>

#define IN 1 
#define OUT 0 

main() {
	int c, state;
	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			state = OUT;
			while ((c = getchar()) == ' ') {
				;
			}
			printf("\n");
		}
		state = IN;
		putchar(c);
		// printf("%c", c);	
	}
	printf("\n");
	return 0;
}
