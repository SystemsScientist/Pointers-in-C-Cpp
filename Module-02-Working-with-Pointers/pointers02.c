// pointers02.c, Module 02, Pointers in C/C++
// program demonstrates variables and pointers
//
// compile and execute program with the following
// command-line scripts:
// $ gcc pointers02.c -o main
// ./main

#include <stdio.h>

int main(void) {

	int a;
	int *p;

	a = 10;
	p = &a;

	printf("%d \n", p);
	printf("%d \n", *p); // *p - value at address pointed to by p
	printf("%d \n", &a);

	return 0;
}
