// pointers04.c, Module 02, Pointers in C/C++
// program demonstrates variables and pointers
//
// compile and execute program with the following
// command-line scripts:
// $ gcc pointers04.c -o main
// $ ./main

#include <stdio.h>

int main(void) {

	int a;
	int *p;

	a = 10;
	p = &a; // &a = address of a
	
	printf("Address of p is %d\n", p);
	printf("Value at p is %d\n", *p);

	int b = 20;
	*p = b; // Will the address in p change to point b?
	printf("Address of p is %d\n", p);
	printf("Value at p is %d\n", *p);

	return 0;
}
