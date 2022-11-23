// pointers08.c, Module 03, Pointers in C/C++
// program demonstrates variables and pointers
//
// compile and execute program with the following
// command-line scripts:
// $ gcc pointers08.c -o main
// $ ./main

#include <stdio.h>

int main(void) {

	int a = 1025;
	int *p;
	p = &a;

	printf("Size of integer is %d bytes\n", sizeof(int));
	printf("Address = %d, value = %d\n", p, *p);

	char *p0;
	p0 = (char*)p; // typecasting
	printf("Size of char is %d bytes\n", sizeof(char));
	printf("Address = %d, value = %d\n", p0, *p0);

	// 1025 = 00000000 00000000 00000100 00000001
	
	return 0;
}
