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
	printf("comparing %s with %s\n", a, b);
	for (int i = 0; i < n; ++i) 
		if (a[i] != b[i]) return a[i] - b[i];

	return 0;
}
