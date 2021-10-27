#include <stdio.h>

#define MAXLINE 5

int getline(char[], int);
void copy(char[], char[]);

int main() {
	int len, max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			printf("The original input line: %d\n", max);
			printf("%s", line);

			copy(longest, line);
		}
		if (max > 0) {
			printf("The length of arbitrarily long input line: %d\n", max);
			printf("%s", longest);
		}
	}
	return 0;
}

int getline(char s[], int lim) {
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
	while ((to[i] = from[i]) != '\0') {
		++i;
	}
}
