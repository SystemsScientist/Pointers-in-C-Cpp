// exercises01.c, Exercises 01, Module 01
// program demonstrates variables and pointers
//
// compile and execute program with the following
// command-line scripts:
// $ gcc exercises01.c -o main
// $ ./main

#include <stdio.h>

int main(void) {

	int a, b;
	int *p, *q;

	p = &a;
	q = &b;

	a = 5;
	b = 10;
	
	printf("\n");
	printf(" p is the address of variable a located at %p \n", p);  // address of a
	printf("&a is the address of variable a located at %p \n", &a); // address of a

	printf("\n");
	printf(" q is the address of variable b located at %p \n", q);  // address of b
	printf("&b is the address of variable b located at %p \n", &b); // address of b

	printf("\n");
	printf("&p is the address of pointer p located at %p \n", &p);  // address of p
	printf("&q is the address of pointer q located at %p \n", &q);  // address of q
	
	printf("\n");
	printf("*p is the value of a %d \n", *p); // value of a - a is dereferenced
	printf("*q is the value of b %d \n", *q); // value of b - b is dereferenced

	printf("\n");
	return 0;
}
