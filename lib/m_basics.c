#include "m_basics.h"

char *concat(char *a, char *b) {
	int len_a = len(a);
	int len_b = len(b);
	char *c = malloc(len_a + len_b + 1);

	if (c == NULL) {
		printf("ERROR: malloc failed in concat\n");
		exit(EXIT_FAILURE);
	}

	while (*a != '\0') *(c++) = *(a++);
	while (*b != '\0') *(c++) = *(b++);
	*c = '\0';

	return c-len_a-len_b;
}

int len(char *s) {
	char *a = s;

	while (*a != '\0') ++a;
	return a-s;
}

int read(char *arr, int max) {
	int c, i = 0;

	while (i < max && (c = getchar()) != EOF) arr[i++] = c;
	arr[i] = '\0';

	return i;
}

int read_line(char *arr, int max) {
	int c, i = 0;

	while (i < max && (c = getchar()) != EOF && c != '\n') arr[i++] = c;
	arr[i] = '\0';

	return i;
}

int strcmpr_first(char *a, char *b, int n) {
	for (int i = 0; i < n; ++i) 
		if (a[i] != b[i]) return a[i] - b[i];

	return 0;
}

int pushed = EOF-1;

int read_char() {
	char c;

	if (pushed >= EOF) {
		c = pushed;
		pushed = EOF-1;
	}
	else {
		c = getchar();
	}

	return c;
}

void push_char(int c) {
	pushed = c;
}

int discard_until(int goal) {
	int c, n = 0;

	while ((c = read_char()) != goal && c != EOF) ++n;

	push_char(c);
	return n;
}

int read_until(int goal, char* str, int size) {
	int c, i;

	for (i = 0; i < size-1 && (c = read_char()) != goal && c != EOF; ++str) {
		*str = c;
	}

	*str = '\0';
	return i;
}
