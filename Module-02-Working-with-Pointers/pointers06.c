// pointers06.c, Module 02, Pointers in C/C++
// program demonstrates variables and pointers
//
// compile and execute program with the following
// command-line scripts:
// $ gcc pointers06.c -o main
// $ ./main

#include <stdio.h>

int main(void) {

	int a = 10;
	int *p;

	p = &a;

	// Pointer arithmetic
	printf("Address p is %d\n", p);
	printf("Value at address p is %d\n", *p);
	printf("Size of integer is %d bytes\n", sizeof(int));
	printf("Address p + 1 is %d\n", p + 1);
	printf("Value at address p + 1 is %d\n", *(p + 1));

	return 0;
}
