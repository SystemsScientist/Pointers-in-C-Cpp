// pointers01.c, Module 01, Pointers in C/C++
// program demonstrates variables and pointers
//
// Compile and execute program with the following
// command-line scripts:
// $ gcc pointers01.c -o main
// $ ./main

#include <stdio.h>

int main(void) {

	int a;
	int *p;

	p = &a;
	a = 5;

	printf(" p is the address of variable a located at %p \n", p);  // address of a
	printf("&a is the address of variable a located at %p \n", &a); // address of a
	printf("&p is the address of variable p located at %p \n", &p); // address of p
	printf("*p is the value of a %d \n", *p);  // value of a

	return 0;
}
