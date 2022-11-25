// pointers11.c, Module 04, Pointers in C/C++
// program demonstrates variables and pointers
//
// compile and execute program with the following
// command-line scripts:
// $ gcc pointers11.c -o main
// $ ./main

#include <stdio.h>

int main(void) {

	int x = 5;
	int *p = &x; // core dump, if *p is not initialized to &x
	*p = 6;
	
	int **q = &p;
	int ***r = &q;

	printf("\n%d\n", *p);
	printf("%d\n", *q);
	printf("%d\n", *(*q));

	printf("%d\n", *(*r));
	printf("%d\n\n", *(*(*r)));

	return 0;
}
