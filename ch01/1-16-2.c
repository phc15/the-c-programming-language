#include <stdio.h>
#define MAXLINE 100

int gline(char line[], int maxline);
void copy(char to[], char from[]);

main() {
	int len, max, buf_len;
	char buffer[MAXLINE]; // current input line
	char line[MAXLINE]; // potential longest candidate
	char longest[MAXLINE];

	len = max = 0;
	while ((buf_len = gline(buffer, MAXLINE)) > 0) {
		// 1. first string 
		if (len = 0) {
			copy(line, buffer);
		}

		// 2. add buffer length to full line length
		len += buf_len;

		// 3. if buffer length is not exceed the MAXLINE
		if (buf_len < MAXLINE) {
			// 3 > 0
			if (len > max) {
				max = len;
				// 5. current longest
				copy(longest, line);
			}
			//4. if buffer length >= max, it is the longest
			if (max > 0) {
				printf("%s", longest);
			}
		}

		if (len > max) {
			max = len;
			printf("The original input line: %d\n", max);
			printf("%s", line);

			copy(longest, line);
		}
	}

	if (max > 0) {
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
