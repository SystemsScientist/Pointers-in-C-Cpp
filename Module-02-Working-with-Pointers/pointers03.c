// pointers03.c, Module 01, Pointers in C/C++
// program demonstrates variables and pointers
//
// compile and execute program with the following
// command-line scripts:
// $ gcc pointers03.c -o main
// $ ./main

#include <stdio.h>

int main(void) {

	int a;
	int *p;

	p = &a; // &a = address of a
	printf("a = %d\n", a);

	*p = 12; // dereferencing 
	printf("a = %d\n", a);

	return 0;
}
