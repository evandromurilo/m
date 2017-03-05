#ifndef M_BASICS_H
#define M_BASICS_H

#include <stdio.h>
#include <stdlib.h>

// len: returns the length of the string 's'
int len(char *s);

// concat: concatenates 'a' and 'b', returns a new string
char *concat(char *a, char *b);

// read: reads up to 'max' chars into the string 'arr'
int read(char *arr, int max);

// read_line: reads in the string 'arr' until '\n' or 'EOF' is found
// or 'max' chars are read
int read_line(char *arr, int max);

// strcmpr_first: compares the first 'n' chars of the strings 'a' and 'b';
// if a > b,  returns > 0
// if b > a,  returns < 0
// if a == b, returns 0
int strcmpr_first(char *a, char *b, int n);

#endif
