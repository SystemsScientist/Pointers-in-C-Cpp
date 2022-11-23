// pointers07.c, Module 03, Pointers in C/C++
// program demonstrates variables and pointers
//
// compile and execute program with the following
// command-line scripts:
// $ gcc pointers07.c -o main
// $ ./main

#include <stdio.h>

int main(void) {

	int a = 1025;
	int *p;
	p = &a;

	printf("Size of integer is %d bytes\n", sizeof(int));
	printf("Address = %d, value = %d\n", p, *p);

	return 0;
}
