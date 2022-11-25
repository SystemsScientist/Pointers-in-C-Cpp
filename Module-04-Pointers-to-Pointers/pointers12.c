// pointers12.c, Module 04, Pointers in C/C++
// program demonstrates variables and pointers
//
// compile and execute program with the following
// command-line scripts:
// $ gcc pointers12.c -o main
// $ ./main

#include <stdio.h>

int main(void) {

	int x = 5;
	int *p = &x;
	*p = 6;

	int** q = &p;
	int*** r = &q;

	printf("\n%d\n", *p);
	printf("%d\n", *q);
	printf("%d\n", **q);

	printf("%d\n", **r);
	printf("%d\n", ***r);

	***r = 10;
	printf("x = %d\n", x);

	**q = *p + 2;
	printf("x = %d\n\n", x);

	return 0;
}
