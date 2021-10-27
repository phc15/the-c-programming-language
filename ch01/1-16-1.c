#include <stdio.h>
#define MAXLINE 

int gline(char line[], int maxline);
void copy(char to[], char from[]);

main() {
	int len, max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = gline(line, MAXLINE)) > 0)
	{
		if (len > max) {
			max = len;
			printf("The original input line: %d\n", max);
			printf("%s", line);

			copy(longest, line);
		}
	}

	if (max > 0) {
		printf("The length of arbitrarily long input line: %d\n", max);
		printf("%s", longest);
	}
	return 0;
}

int gline(char s[], int lim) {

	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		// same line
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}

void copy(char to[], char from[]) {
	int i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
